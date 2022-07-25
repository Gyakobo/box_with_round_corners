#ifndef R2048_H
#define R2048_H

// Dependencies
#include <iostream>
#include "../../headers/grid.h"

using namespace std;

class R2048: public Grid {
private:

    int width=4, height=4; 
    int board[4][4];

    int dirLine[4] =     { 1, 0, -1, 0 };
    int dirColumn[4] =   { 0, 1, 0, -1 };

    grid::eDir direction = grid::STOP;

public:
    R2048();
    R2048(int width, int height);
    void Reset();

    void printUI() {
        for (int i=0; i<4; ++i) {
            for (int j=0; j<4; ++j) {
                if (board[i][j] == 0)
                    cout << " ";
                else cout << board[i][j];
            }
            cout << "\n";
        }
        cout << "Let's start all over\n";
    }

    void q_key_pressed() { Reset(); }
    void w_key_pressed() { direction = grid::UP; }
    void a_key_pressed() { direction = grid::LEFT; }
    void s_key_pressed() { direction = grid::DOWN; }
    void d_key_pressed() { direction = grid::RIGHT; }
};


#endif
