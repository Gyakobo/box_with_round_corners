#ifndef R2048_H
#define R2048_H

// Dependencies
#include <iostream>
#include <cstdlib>
#include "../../headers/grid.h"

using namespace std;

class R2048: public Grid {
private:
    bool flag = true;

    int width=4, height=4; 
    int board[4][4];

    int dirLine[4] =     { 1, 0, -1, 0 };
    int dirColumn[4] =   { 0, 1, 0, -1 };

    grid::eDir direction = grid::STOP;

    void Reset();
    void applyMove(int _direction);
    pair<int, int> generateUnoccupiedPosition();

public:
    R2048();
    R2048(int width, int height);

    void printUI();

    void q_key_pressed() { Reset(); flag = true; }
    void w_key_pressed() { direction = grid::UP; flag = true; }
    void a_key_pressed() { direction = grid::LEFT; flag = true; }
    void s_key_pressed() { direction = grid::DOWN; flag = true; }
    void d_key_pressed() { direction = grid::RIGHT; flag = true; }
};


#endif
