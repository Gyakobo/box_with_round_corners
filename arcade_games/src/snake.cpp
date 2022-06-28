#include "../headers/snake.h"


Snake::Snake() {
    vector<vec4> row_color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }

}

void Snake::Draw() {
    if (gameOver) {

        vec4 blank     =    vec4(0, 0, 0, 1);
        vec4 red_color =    vec4(1, 0, 0, 1); 
        vec4 white_color =  vec4(1, 1, 1, 1);
        vec4 gray_color =   vec4(0.5, 0.5, 0.5, 1);
 
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) { 
                if (i == y && j == x) DrawOnScreen(i, j, white_color);
                else if (i == fruitY && j == fruitX) DrawOnScreen(i, j, red_color);
                else {

                    bool print = false;

                    for (int k=0; k<nTail; k++) {
                        if (i==tailY[k] && j==tailX[k]) {
                            DrawOnScreen(i, j, gray_color); 
                            print = true;
                        }
                    }
                    if (!print) {
                        DrawOnScreen(i, j, blank); 
                    } 

                }
            }
        }
    }
}

void Snake::Input() {
    if (w_key) {
        dir = UP;
        w_key = false;
    }       
    else if (a_key) {
        dir = LEFT;
        a_key = false;
    } 
    else if (s_key) {
        dir = DOWN;
        s_key = false;
    }
    else if (d_key) {
        dir = RIGHT;
        d_key = false;
    }

}

void Snake::Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    tailX[0] = x;
    tailY[0] = y;
    int prev2X, prev2Y;

    for (int i=1; i<nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    if (gameOver) {
        switch(dir) {
            case UP:
                x++;
                break;
            case DOWN:
                x--;
                break;
            case LEFT:
                y--;
                break;
            case RIGHT:
                y++;
                break;
            default:
                break;
        }
    }
    else cout << "Game Over\n";

    if (x<0 || x>width || y<0 || y>height) {
        gameOver = false;
    }

    for (int i=0; i<nTail; i++) {
        if (x==tailX[i] && y==tailY[i]) {
            gameOver = false;
        }
    }


    if (x == fruitX && y == fruitY) {
        score+=10;

        fruitX = rand() % width;
        fruitY = rand() % height;

        nTail++;

        cout << score << "\n";
    }
}









