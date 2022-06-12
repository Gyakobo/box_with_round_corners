#ifndef ALPHA_NUMERIC_H
#define ALPHA_NUMERIC_H

// Essentials
#include <stdio.h>
#include <math.h>

// Dependancies
#include <vector>
#include "Renderable2D.h"
#include "sprite.h"

// Colors
#define WHITE			vec4(255, 255, 255, 1)
#define BLACK			vec4(0, 0, 0, 1)
#define DEFAULT			BLACK	
#define RED				vec4(255, 0, 0, 1)
#define GREEN			vec4(0, 255, 0, 1)
#define BLUE			vec4(0, 0, 255, 1)
#define RANDOM_COLOR	vec4(rand()%1000/1000.0f, rand()%1000/1000.0f, rand()%1000/1000.0f, 1)


// ------------------------------------------Sprites of numbers------------------------------------------

// Number 0
const vector<vector<vec4>> number_0 = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK }, 
};

// Number 1
const vector<vector<vec4>> number_1 = {   
    { BLACK,BLACK,WHITE,BLACK }, 
    { BLACK,WHITE,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,WHITE,WHITE,WHITE }
};

// Number 2
const vector<vector<vec4>> number_2 = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,WHITE,WHITE,WHITE }
};

// Number 3
const vector<vector<vec4>> number_3 = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK }
};

// Number 4
const vector<vector<vec4>> number_4 = {   
    { BLACK,BLACK,WHITE,BLACK }, 
    { BLACK,WHITE,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,WHITE,BLACK },
    { WHITE,WHITE,WHITE,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK }
};

// Number 5
const vector<vector<vec4>> number_5 = {   
    { WHITE,WHITE,WHITE,WHITE }, 
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,WHITE,WHITE,BLACK }, 
    { BLACK,BLACK,BLACK,WHITE }, 
    { BLACK,BLACK,BLACK,WHITE }, 
    { BLACK,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK }, 
};

// Number 6
const vector<vector<vec4>> number_6 = {   
    { BLACK,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK },
};

// Number 7
const vector<vector<vec4>> number_7 = {   
    { WHITE,WHITE,WHITE,BLACK },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
};

// Number 8
const vector<vector<vec4>> number_8 = {   
    { BLACK,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK },
};

// Number 9
const vector<vector<vec4>> number_9 = {   
    { BLACK,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK },
};

const vector<vector<vector<vec4>>> number_ = { number_0, number_1, number_2, number_3, number_4, number_5, number_6, number_7, number_8, number_9 };


#endif




























