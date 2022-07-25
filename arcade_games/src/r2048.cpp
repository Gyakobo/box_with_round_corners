#include "../headers/r2048.h"

R2048::R2048() {
    grid::randomize();
    Reset();
}

R2048::R2048(int width, int height): R2048() {
    this->width =   width;
    this->height =  height;
}

void R2048::Reset() {
    direction = grid::STOP;

    for (int i=0; i<4; ++i) 
        for (int j=0; j<4; ++j) 
            board[i][j] = 0;

    pair<int, int> pos = generateUnoccupiedPosition();
    board[pos.first][pos.second] = 2;
}

void R2048::applyMove(int _direction) {
    //int boardCopy[4][4];
    //for (int i=0; i<4; ++i)
    //    for (int j=0; j<4; ++j)
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
        for (int i=0; i<4; ++i) {
            for (int j=0; j<4; ++j) 
                if (board[i][j] == 0) cout << ".";
                else cout << board[i][j];
            cout << "\n";
        }
        flag = false;
        cout << "q:quit, w:up, s:down, a:left, d:right\n";
    }
}

