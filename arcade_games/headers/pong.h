#ifndef PONG_H
#define PONG_H

// Dependencies
#include "../../headers/grid.h"

class Pong : Grid {
private:
    int y_coordinate;
    vec2 ball_speed;

public:
    Pong();

    void update();

    void control(int y_coordinate);
};

#endif
