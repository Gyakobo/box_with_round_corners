#ifndef PONG_H
#define PONG_H

// Dependencies
#include "../../headers/grid.h"
#include <time.h>

enum eDir {
    STOP=0,
    LEFT=1,
    UPLEFT=2,
    DOWNLEFT=3,
    RIGHT=4,
    UPRIGHT=5,
    DOWNRIGHT=6
};



class Ball {
private:
    int x, y;
    int originalX, originalY;
    eDir direction;
public:
    Ball(int posX, int posY) {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;

        direction = STOP;
    }
    void Reset() {
        x = originalX;
        y = originalY;
        direction = STOP;
    }
    void changeDirection(eDir _direction) {
        direction = _direction;
    }

    void randomDirection() {
        grid::randomize();
        direction = (eDir)((rand() % 6) + 1);
    }

    inline int getX() { return x; }
    inline int getY() { return y; }
    inline eDir getDirection() { return direction; }
    void Move() {
        switch(direction) {
            case STOP:
                break;
            case LEFT:
                x--;
                break;
            case RIGHT:
                x++;
                break;
            case UPLEFT:
                x--;
                y--;
                break;
            case DOWNLEFT:
                x--;
                y++;
                break;
            case UPRIGHT:
                x++;
                y--;
                break;
            case DOWNRIGHT:
                x++;
                y++;
                break;
            default:
                break;
        }
    }
};



class Paddle {
private:
    int x, y;
    int originalX, originalY;
public:
    Paddle() {
        x = y = 0;
    }

    Paddle(int posX, int posY) : Paddle {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }

    inline void Reset() {
        x = originalX; 
        y = originalY; 
    }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++; }
};




class Pong : public Grid {
private:
    int width=32, height=32;
    int score1=0, score2=0;
    char up1, down1, up2, down2;
    bool quit;

    Ball * ball;
    Paddle * player1;
    Paddle * player2;

public:
    Pong() {
        grid::randomize();
        quit = false;
        up1 = 'w';
        up2 = 'i';

        down1 = 's'; 
        down2 = 'k';

        ball = new Ball(width/2, height/2);

        player1 = new Paddle(1, height/2 - 3);
        player2 = new Paddle(width-2, height/2-3);
    }
    Pong(int width=32, int height=32) : Pong {
        this->width = width;
        this->height = height;
    }

    ~Pong() {
        delete ball, player1, player2;
    }

    void ScoreUp(Paddle * player) {
        if (player == player1) 
            score1++;
        else if (player == player2) 
            score2++
        ball->Reset();
        player1->Reset();
        player2->Reset();
    }

    void Draw();
};

#endif
