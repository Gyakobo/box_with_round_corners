#ifndef R2048_H
#define R2048_H

// Dependencies
#include <iostream>
#include <cstdlib>
#include "../../headers/grid.h"

using namespace std;

class R2048: public Grid {
private:
    int width=4, height=4; 
    int board[4][4];

    int dirLine[4] =     { 1, 0, -1, 0 };
    int dirColumn[4] =   { 0, 1, 0, -1 };

    int direction;
    int previous_direction = -1;

    void Reset();
    void applyMove();
    pair<int, int> generateUnoccupiedPosition();
    bool canDoMove(int line, int column, int nextLine, int nextColumn);
    void addPiece();

public:
    R2048();
    R2048(int width, int height);

    void printUI();

    void q_key_pressed() { Reset(); }

    void w_key_pressed() { 
        direction = 2; 
        applyMove();
        printUI();
        //previous_direction = direction;
    }

    void a_key_pressed() { 
        direction = 3; 
        applyMove();
        printUI();
        //previous_direction = direction;
    }
    
    void s_key_pressed() {  
        direction = 0; 
        applyMove();
        printUI();
        //previous_direction = direction;
    }

    void d_key_pressed() {  
        direction = 1; 
        applyMove();
        printUI();
        //previous_direction = direction;
    }
};


#endif







