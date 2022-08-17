#ifndef PONG_H
#define PONG_H

// Dependencies
#include "../../headers/grid.h"
#include <time.h>



class Ball {
private:
    int x, y;
    int originalX, originalY;
    grid::eDir direction;
public:
    Ball(int posX, int posY) {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;

        direction = grid::STOP;
    }
    void Reset() {
        x = originalX;
        y = originalY;
        direction = grid::STOP;
    }
    void changeDirection(grid::eDir _direction) {
        direction = _direction;
    }

    void randomDirection() {
        grid::randomize();
        direction = (grid::eDir)((rand() % 6) + 1);
    }

    int getX() { return x; }
    int getY() { return y; }
    grid::eDir getDirection() { return direction; }
    void Move() {
        switch(direction) {
            case grid::STOP:
                break;
            case grid::LEFT:
                x--;
                break;
            case grid::RIGHT:
                x++;
                break;
            case grid::UPLEFT:
                x--;
                y--;
                break;
            case grid::DOWNLEFT:
                x--;
                y++;
                break;
            case grid::UPRIGHT:
                x++;
                y--;
                break;
            case grid::DOWNRIGHT:
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

    Paddle(int posX, int posY) : Paddle() 
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }

    void Reset() {
        x = originalX; 
        y = originalY; 
    }
    int getX() { return x; }
    int getY() { return y; }
    void moveUp() { y-=2; }
    void moveDown() { y+=2; }
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
        vector<vec4> row_color;
        for (int i=-1; i<32; i++) {
            row_color.push_back(DEFAULT);
        }
        for (int i=-1; i<32; i++) {
            sprite.push_back(row_color);
        }

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

    Pong(int width, int height) : Pong() {
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
            score2++;
        ball->Reset();
        player1->Reset();
        player2->Reset();
    }

    void Draw();

    void Input() {
        ball->Move();

        int ballx = ball->getX();
        int bally = ball->getY();
        int player1x = player1->getX();
        int player1y = player1->getY();
        int player2x = player2->getX();
        int player2y = player2->getY();

        if (ball->getDirection() == grid::STOP) ball->randomDirection();
    }

    void a_key_pressed() {
        if(player1->getY() > 0) player1->moveUp();
    }
    void d_key_pressed() {
        if(player1->getY() + 4 < height) player1->moveDown();
    }

    void j_key_pressed() {
        if(player2->getY() > 0) player2->moveUp();
    }
    void l_key_pressed() {
        if(player2->getY() + 4 < height) player2->moveDown();
    }

    void Logic() {
        grid::randomize();

        int ballx = ball->getX();
        int bally = ball->getY();
        int player1x = player1->getX();
        int player1y = player1->getY();
        int player2x = player2->getX();
        int player2y = player2->getY();

        // left paddle
        for (int i=0; i<4; i++) 
            if (ballx == player1x + 1) 
                if (bally == player1y + i) 
                    ball->changeDirection((grid::eDir)((rand() % 3) + 4));
        
        // right paddle
        for (int i=0; i<4; i++) 
            if (ballx == player2x - 1) 
                if (bally == player2y + i) 
                    ball->changeDirection((grid::eDir)((rand() % 3) + 1));

        // bottom wall
        if (bally == height - 1) 
            ball->changeDirection(ball->getDirection() == grid::DOWNRIGHT ? grid::UPRIGHT : grid::UPLEFT);
        
        // top wall
        if (bally == 0) 
            ball->changeDirection(ball->getDirection() == grid::UPRIGHT ? grid::DOWNRIGHT : grid::DOWNLEFT);
        // right wall 
        if (ballx == width - 1)
            ScoreUp(player1);
        // left wall
        if (ballx == 0)
            ScoreUp(player2);
    }

    void Run() {
        Draw();
        Input();
		Logic();
		update();
    }
};

#endif




