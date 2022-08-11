#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

// Essentials
#include <iostream>
#include <stdio.h>
#include "../../headers/grid.h"

using namespace std;

class Game_of_Life: public Grid {
private:
    int width=32, height=32;
    bool display[32][32], swap[32][32];

    vec4 blank =        vec4(0, 0, 0, 1);
    vec4 white_color =  vec4(1, 1, 1, 1);

    /*void left_shif_buffer(bool& buffer_1[32][32], bool& buffer_2[32][32]) {
        for (int i=0; i<width; i++)
            for (int j=0; j<height; j++)
                buffer_1[i][j] = buffer_2[i][j];
    }*/

    bool isAlive(const int x, const int y);

public:
    Game_of_Life(const int width, const int height);
    void Draw();
};

#endif