#ifndef SNAKE_H
#define SNAKE_H

#include "../../headers/grid.h"

//#include <conio.h>

class Snake : public Grid {
private:
    bool gameOver = false;

    bool w_key = false;
    bool a_key = false;
    bool s_key = false;
    bool d_key = false;

    int x, y, fruitX, fruitY, score;
    int width = 32, height = 32;

    enum eDirection { STOP=0, UP, DOWN, LEFT, RIGHT };
    eDirection dir;

public:
    Snake();
    
    void Setup() {
        grid::randomize();
        gameOver = true;
        x = width/2;
        y = height/2;
        fruitX = rand() % width;
        fruitY = rand() % height;

    }

    void Draw(); // Basically the Update function
    void Input();
    void Logic();

    void w_key_pressed() w_key = true;
    void a_key_pressed() a_key = true;
    void s_key_pressed() s_key = true;
    void d_key_pressed() d_key = true;

};


#endif
