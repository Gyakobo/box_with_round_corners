#include "../headers/pong.h"

void Pong::Draw() {
    vec4 wall_color =   vec4(0.1, 0.1, 0.4, 1);
    vec4 ball_color =   vec4(1, 0, 0, 1);
    vec4 paddle_color = vec4(1, 1, 1, 1);
    vec4 blank =        vec4(0, 0, 0, 1);

    int WIDTH_MINUS_1 = width-1;
    //for (int i=0; i<width+2; i++) DrawOnScreen(i, zero, wall_color);

    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            
            int ballx = ball->getX();
            int bally = ball->getY();
            int player1x = player1->getX();
            int player1y = player1->getY();
            int player2x = player2->getX();
            int player2y = player2->getY();

            //if (j == 0) DrawOnScreen(i, j, wall_color);  

            if (ballx == j && bally == i) DrawOnScreen(i, j, ball_color);
            else if (player1x == j && player1y == i) DrawOnScreen(i, j, paddle_color);
            else if (player2x == j && player2y == i) DrawOnScreen(i, j, paddle_color);

            else if (player1x == j && player1y+1 == i) DrawOnScreen(i, j, paddle_color);
            else if (player1x == j && player1y+2 == i) DrawOnScreen(i, j, paddle_color);
            else if (player1x == j && player1y+3 == i) DrawOnScreen(i, j, paddle_color);

            else if (player2x == j && player2y+1 == i) DrawOnScreen(i, j, paddle_color);
            else if (player2x == j && player2y+2 == i) DrawOnScreen(i, j, paddle_color);
            else if (player2x == j && player2y+3 == i) DrawOnScreen(i, j, paddle_color);

            else DrawOnScreen(i, j, blank);

            if(score1 == width+1 && score1 != 0) {
                ball->Reset();
                player1->Reset();
                player2->Reset();
                score1 = 0;
                score2 = 0;
            }
            else if (j == 0 && i<score1) DrawOnScreen(i, j, wall_color);

            if(score2 == width+1 && score2 != 0) {
                ball->Reset();
                player1->Reset();
                player2->Reset();
                score1 = 0;
                score2 = 0;
            }
            else if (j == WIDTH_MINUS_1 && i<score2) DrawOnScreen(i, WIDTH_MINUS_1, wall_color);

        }
    }

}


