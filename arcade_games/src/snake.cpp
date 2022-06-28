#include "../headers/snake.h"


Snake::Snake() {
    vector<vec4> row_color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }

}

void Snake::Draw() {
    vec4 blank     =    vec4(0, 0, 0, 1);
    vec4 red_color =    vec4(1, 0, 0, 1); 
    vec4 white_color =  vec4(1, 1, 1, 1);

    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) { 
            if (i == y && j == x) DrawOnScreen(i, j, white_color);
            else if (i == fruitY && j == fruitX) DrawOnScreen(i, j, red_color);
            else DrawOnScreen(i, j, blank);
        }
    }

}

void Snake::Input() {
    if (w_key)      dir = UP;
    else if (a_key) dir = LEFT;
    else if (s_key) dir = DOWN;
    else if (d_key) dir = RIGHT;

}

void Snake::Logic() {
    switch(dir) {
        case UP:
            y--;
            break;
        case DOWN;
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT;
            x++;
            break;
        default:
            break;
    }
}









