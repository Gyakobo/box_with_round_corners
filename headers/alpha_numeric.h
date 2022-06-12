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

// ------------------------------------------Sprites of alphabets------------------------------------------

// Letter A
const vector<vector<vec4>> letter_A = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE } 
};

// Letter B
const vector<vector<vec4>> letter_B = {   
    { WHITE,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,WHITE } 
};

// Letter C
const vector<vector<vec4>> letter_C = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK } 
};

// Letter D
const vector<vector<vec4>> letter_D = {   
    { WHITE,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK } 
};

// Letter E
const vector<vector<vec4>> letter_E = {   
    { BLACK,WHITE,WHITE,WHITE }, 
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,WHITE,WHITE },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,WHITE,WHITE } 
};

// Letter F
const vector<vector<vec4>> letter_F = {   
    { BLACK,WHITE,WHITE,WHITE }, 
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK } 
};

// Letter G
const vector<vector<vec4>> letter_G = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,WHITE,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK } 
};

// Letter H
const vector<vector<vec4>> letter_H = {   
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
};

// Letter I
const vector<vector<vec4>> letter_I = {   
    { BLACK,WHITE,WHITE,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,WHITE,WHITE,WHITE },
};

// Letter J
const vector<vector<vec4>> letter_J = {   
    { BLACK,WHITE,WHITE,WHITE }, 
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { WHITE,BLACK,WHITE,BLACK },
    { WHITE,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK } 
};

// Letter K 
const vector<vector<vec4>> letter_K = {   
    { WHITE,BLACK,BLACK,WHITE }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,WHITE,BLACK },
    { WHITE,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE } 
};

// Letter L
const vector<vector<vec4>> letter_L = {   
    { BLACK,WHITE,BLACK,BLACK }, 
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,WHITE,WHITE } 
};

// Letter M, has 5 x-elements  
const vector<vector<vec4>> letter_M = {   
    { WHITE,BLACK,BLACK,BLACK,WHITE }, 
    { WHITE,WHITE,BLACK,WHITE,WHITE },
    { WHITE,BLACK,WHITE,BLACK,WHITE },
    { WHITE,BLACK,WHITE,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK,WHITE } 
};

// Letter N
const vector<vector<vec4>> letter_N = {   
    { WHITE,BLACK,BLACK,WHITE }, 
    { WHITE,WHITE,BLACK,WHITE },
    { WHITE,WHITE,BLACK,WHITE },
    { WHITE,BLACK,WHITE,WHITE },
    { WHITE,BLACK,WHITE,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE } 
};

// Letter O
const vector<vector<vec4>> letter_O = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK } 
};

// Letter P
const vector<vector<vec4>> letter_P = {   
    { WHITE,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,BLACK },
    { WHITE,BLACK,BLACK,BLACK } 
};

// Letter Q
const vector<vector<vec4>> letter_Q = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,WHITE,WHITE },
    { BLACK,WHITE,WHITE,WHITE } 
};

// Letter R
const vector<vector<vec4>> letter_R = {   
    { WHITE,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE } 
};

// Letter S
const vector<vector<vec4>> letter_S = {   
    { BLACK,WHITE,WHITE,BLACK }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK },
    { BLACK,WHITE,WHITE,BLACK },
    { BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,WHITE,WHITE,BLACK } 
};

// Letter T
const vector<vector<vec4>> letter_T = {   
    { BLACK,WHITE,WHITE,WHITE }, 
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK } 
};

// Letter U
const vector<vector<vec4>> letter_U = {   
    { WHITE,BLACK,BLACK,WHITE }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK } 
};

// Letter V
const vector<vector<vec4>> letter_V = {   
    { WHITE,BLACK,BLACK,WHITE }, 
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,WHITE,BLACK },
    { WHITE,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK } 
};

// Letter W, has 5 x-elements 
const vector<vector<vec4>> letter_W = {   
    { WHITE,BLACK,BLACK,BLACK,WHITE }, 
    { WHITE,BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,BLACK,WHITE },
    { WHITE,BLACK,WHITE,BLACK,WHITE },
    { BLACK,WHITE,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,WHITE,BLACK } 
};

// Letter X 
const vector<vector<vec4>> letter_X = {   
    { WHITE,BLACK,BLACK,WHITE }, 
    { WHITE,BLACK,BLACK,WHITE },
    { BLACK,WHITE,BLACK,WHITE },
    { BLACK,WHITE,WHITE,BLACK },
    { WHITE,BLACK,WHITE,BLACK },
    { WHITE,BLACK,BLACK,WHITE },
    { WHITE,BLACK,BLACK,WHITE } 
};

// Letter Y 
const vector<vector<vec4>> letter_Y = {   
    { BLACK,WHITE,BLACK,WHITE }, 
    { BLACK,WHITE,BLACK,WHITE },
    { BLACK,WHITE,BLACK,WHITE },
    { BLACK,WHITE,WHITE,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,BLACK,WHITE,BLACK } 
};

// Letter Z 
const vector<vector<vec4>> letter_Z = {   
    { BLACK,WHITE,WHITE,WHITE }, 
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,BLACK,WHITE },
    { BLACK,BLACK,WHITE,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,BLACK,BLACK },
    { BLACK,WHITE,WHITE,WHITE } 
};



// ------------------------------------------Sprites of numbers------------------------------------------

// Number 0
const vector<vector<vec4>> number_0 = letter_O;   

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
    { BLACK,WHITE,WHITE,BLACK },
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

const vector<vector<vector<vec4>>> number = { number_0, number_1, number_2, number_3, number_4, number_5, number_6, number_7, number_8, number_9 };


#endif




























