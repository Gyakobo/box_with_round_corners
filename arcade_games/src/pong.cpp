#include "../headers/pong.h"

Pong::Pong() {
   vector<vec4> row_color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }
}


void Pong::Draw() {
    vec4 wall_color =   vec4(0.1, 0.1, 0.4, 1);
    vec4 ball_color =   vec4(1, 0, 0, 1);
    vec4 paddle_color = vec4(1, 1, 1, 1);
    vec4 blank =       vec4(0, 0, 0, 1);

    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            int ballx = ball->getX();
            int bally = ball->getY();
            int player1x = player1->getX();
            int player1y = player1->getY();
            int player2x = player2->getX();
            int player2y = player2->getY();

            if (j == 0) DrawOnScreen(i, j, wall_color);  

            if (ballx == j && bally == i) DrawOnScreen(i, j, ball_color);
            else if (player1x == j && player1y == y) DrawOnScreen(i, j, paddle_color);
            else if (player2x == j && player2y == y) DrawOnScreen(i, j, paddle_color);
            else DrawOnScreen(i, j, blank);

            if (j == width-1) DrawOnScreen(i, j, wall_color);
        }
    }
}


