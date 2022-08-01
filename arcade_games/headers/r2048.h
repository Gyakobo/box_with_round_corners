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

    //int direction = -1;

    void Reset();
    void applyMove(int _direction);
    pair<int, int> generateUnoccupiedPosition();
    bool canDoMove(int line, int column, int nextLine, int nextColumn);
    void addPiece();

public:
    R2048();
    R2048(int width, int height);

    void printUI();

    void q_key_pressed() { Reset(); flag = true; }

    void w_key_pressed() { // UP kinda works
        //direction = grid::UP; 
        flag = true; 
        applyMove(2);
    }

    void a_key_pressed() { 
        //direction = grid::LEFT; 
        flag = true; 
        applyMove(3);
    }
    
    void s_key_pressed() {  
        //direction = grid::DOWN; 
        flag = true; 
        applyMove(0);
    }

    void d_key_pressed() {  // RIGHT kinda works
        //direction = grid::RIGHT; 
        flag = true; 
        applyMove(1);
    }
};


#endif







