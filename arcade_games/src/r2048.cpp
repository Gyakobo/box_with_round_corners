#include "../headers/r2048.h"

R2048::R2048() {
    grid::randomize();
    Reset();
}

R2048::R2048(int width, int height): R2048() {
    this->width =   width;
    this->height =  height;
}

void R2048::addPiece() {
    pair<int, int> pos = generateUnoccupiedPosition();
    board[pos.first][pos.second] = 2;
}

void R2048::Reset() {
    //direction = grid::STOP;

    for (int i=0; i<4; ++i) 
        for (int j=0; j<4; ++j) 
            board[i][j] = 0;

    addPiece();
    //pair<int, int> pos = generateUnoccupiedPosition();
    //board[pos.first][pos.second] = 2;
}

bool R2048::canDoMove(int line, int column, int nextLine, int nextColumn) {
    if (nextLine < 0 || nextColumn < 0 || nextLine >= 4 || nextColumn >= 4 
    || (board[line][column] != board[nextLine][nextColumn] && board[nextLine][nextColumn] != 0)) return false;

    return true;

}

void R2048::applyMove(int direction) {
    int startLine = 0, startColumn = 0, lineStep = 1, columnStep = 1;
    if (direction == 0) { // 0 - down
        startLine = 3;
        lineStep = -1;
    }
    if (direction == 1) { // 1 - left
        startColumn = 3;
        columnStep = -1;
    }
    int movePossible = 0;
    for (int i=startLine; i>=0 && i<4; i+=lineStep) 
        for (int j=startColumn; j>=0 && j<4; j+=columnStep) {
            int nextI = i + dirLine[direction], nextJ = j + dirColumn[direction];
            if(canDoMove(i, j, nextI, nextJ)) {
                board[nextI][nextJ] += board[i][j];
                board[i][j] = 0;
                movePossible = 1;
            }
        }

    if (movePossible) {
        addPiece();
    }

}

pair<int, int> R2048::generateUnoccupiedPosition() {
    int line, column;
    bool occupied = true;
    while (occupied) {
        line    = rand() % 4;
        column  = rand() % 4;

        if (board[line][column] == 0) occupied = false; 
    }
    return make_pair(line, column);
}

void R2048::printUI() {
    if (flag) {
        system("clear");
        for (int i=0; i<4; ++i) {
            for (int j=0; j<4; ++j) 
                if (board[i][j] == 0) cout << ". ";
                else cout << board[i][j] << " ";
            cout << "\n";
        }
        flag = false;
        cout << "q:quit, w:up, s:down, a:left, d:right\n";
    }
}

