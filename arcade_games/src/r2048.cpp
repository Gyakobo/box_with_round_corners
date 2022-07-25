#include "../headers/r2048.h"

R2048::R2048() {
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
}





