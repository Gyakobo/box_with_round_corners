#ifndef CLOCK_H
#define CLOCK_H

// Dependencies
#include "../../headers/grid.h"
#include <ctime>

class _Clock: public Grid {
private:
    int width, height;
    bool start_time = true;

    // Time and Date Details
    time_t now = time(0);   // current date/time based on current system
    

public:
    _Clock();
    _Clock(int width, int height);

    void Draw();
};


#endif
