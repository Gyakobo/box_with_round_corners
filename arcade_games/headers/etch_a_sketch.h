#ifndef ETCH_A_SKETCH
#define ETCH_A_SKETCH

// Dependencies
#include <iostream>
#include "../../headers/grid.h"

using namespace std;

class Etch_a_sketch: public Grid {
private:
    int width=4, height=4;

public:
    Etch_a_sketch();

};

#endif