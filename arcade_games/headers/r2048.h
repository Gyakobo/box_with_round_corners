#ifndef R2048_H
#define R2048_H

// Dependencies
#include <iostream>
#include <cstdlib>
#include "../../headers/grid.h"

// Defines of Number Colors
#define Number_2_color      vec4(238, 228, 218, 1) 
#define Number_4_color      vec4(238, 225, 201, 1) 
#define Number_8_color      vec4(243, 178, 122, 1) 
#define Number_16_color     vec4(246, 150, 100, 1) 
#define Number_32_color     vec4(247, 124, 95, 1) 
#define Number_64_color     vec4(247, 95, 59, 1) 
#define Number_128_color    vec4(237, 208, 115, 1) 
#define Number_256_color    vec4(237, 204, 98, 1) 
#define Number_512_color    vec4(237, 201, 80, 1) 
#define Number_1024_color   vec4(237, 197, 63, 1) 
#define Number_2048_color   vec4(237, 194, 46, 1)  // Should be also accustomed for beyond



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

    void Draw();

    void w_key_pressed() { 
        direction = 2; 
        applyMove();
        //previous_direction = direction;
    }

    void a_key_pressed() { 
        direction = 3; 
        applyMove();
        //previous_direction = direction;
    }
    
    void s_key_pressed() {  
        direction = 0; 
        applyMove();
        //previous_direction = direction;
    }

    void d_key_pressed() {  
        direction = 1; 
        applyMove();
        //previous_direction = direction;
    }
};


#endif







