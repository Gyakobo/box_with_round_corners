#ifndef ALPHA_NUMERIC_H
#define ALPHA_NUMERIC_H

// Essentials
#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

// Dependancies
#include <vector>
#include "Renderable2D.h"
#include "sprite.h"

// Colors
#define WHITE vec4(255, 255, 255, 1)
#define BLACK vec4(0, 0, 0, 1)

#define WHITE_ true
#define BLACK_ false

#define DEFAULT BLACK
#define RED vec4(255, 0, 0, 1)
#define GREEN vec4(0, 255, 0, 1)
#define BLUE vec4(0, 0, 255, 1)
#define RANDOM_COLOR vec4(rand() % 1000 / 1000.0f, rand() % 1000 / 1000.0f, rand() % 1000 / 1000.0f, 1)

// ------------------------------------------Sprites of alphabets------------------------------------------

// Letter A
const vector<vector<bool>> letter_A = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_}};

// Letter B
const vector<vector<bool>> letter_B = {
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, WHITE_}};

// Letter C
const vector<vector<bool>> letter_C = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Letter D
const vector<vector<bool>> letter_D = {
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_}};

// Letter E
const vector<vector<bool>> letter_E = {
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_}};

// Letter F
const vector<vector<bool>> letter_F = {
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_}};

// Letter G
const vector<vector<bool>> letter_G = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Letter H
const vector<vector<bool>> letter_H = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
};

// Letter I
const vector<vector<bool>> letter_I = {
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, WHITE_},
};

// Letter J
const vector<vector<bool>> letter_J = {
    {BLACK_, WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, BLACK_}};

// Letter K
const vector<vector<bool>> letter_K = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_}};

// Letter L
const vector<vector<bool>> letter_L = {
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_}};

// Letter M, has 5 x-elements
const vector<vector<bool>> letter_M = {
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, BLACK_, WHITE_, WHITE_},
    {WHITE_, BLACK_, WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_}};

// Letter N
const vector<vector<bool>> letter_N = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, BLACK_, WHITE_},
    {WHITE_, WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, WHITE_},
    {WHITE_, BLACK_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_}};

// Letter O
const vector<vector<bool>> letter_O = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Letter P
const vector<vector<bool>> letter_P = {
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_}};

// Letter Q
const vector<vector<bool>> letter_Q = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, WHITE_},
    {BLACK_, WHITE_, WHITE_, WHITE_}};

// Letter R
const vector<vector<bool>> letter_R = {
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_}};

// Letter S
const vector<vector<bool>> letter_S = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_}};

// Letter T
const vector<vector<bool>> letter_T = {
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_}};

// Letter U
const vector<vector<bool>> letter_U = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Letter V
const vector<vector<bool>> letter_V = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, BLACK_}};

// Letter W, has 5 x-elements
const vector<vector<bool>> letter_W = {
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, BLACK_, WHITE_},
    {BLACK_, WHITE_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, WHITE_, BLACK_}};

// Letter X
const vector<vector<bool>> letter_X = {
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_}};

// Letter Y
const vector<vector<bool>> letter_Y = {
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_}};

// Letter Z
const vector<vector<bool>> letter_Z = {
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_}};

// ------------------------------------------Sprites of numbers------------------------------------------

// Small Number 0
const vector<vector<bool>> small_number_0 = {
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_}};
// Small Number 1
const vector<vector<bool>> small_number_1 = {{WHITE_, WHITE_}, {BLACK_, WHITE_}, {BLACK_, WHITE_}, {BLACK_, WHITE_}};
// Small Number 2
const vector<vector<bool>> small_number_2 = {{WHITE_, WHITE_, WHITE_}, {BLACK_, WHITE_, WHITE_}, {WHITE_, BLACK_, BLACK_}, {WHITE_, WHITE_, WHITE_}};
// Small Number 3
const vector<vector<bool>> small_number_3 = {{WHITE_, WHITE_, WHITE_}, {BLACK_, WHITE_, WHITE_}, {BLACK_, BLACK_, WHITE_}, {WHITE_, WHITE_, WHITE_}};
// Small Number 4
const vector<vector<bool>> small_number_4 = {{WHITE_, BLACK_, WHITE_}, {WHITE_, BLACK_, WHITE_}, {WHITE_, WHITE_, WHITE_}, {BLACK_, BLACK_, WHITE_}};
// Small Number 5
const vector<vector<bool>> small_number_5 = {{WHITE_, WHITE_, WHITE_}, {WHITE_, WHITE_, BLACK_}, {BLACK_, BLACK_, WHITE_}, {WHITE_, WHITE_, WHITE_}};
// Small Number 6
const vector<vector<bool>> small_number_6 = {{WHITE_, WHITE_, WHITE_}, {WHITE_, BLACK_, BLACK_}, {WHITE_, WHITE_, WHITE_}, {WHITE_, WHITE_, WHITE_}};
// Small Number 7
const vector<vector<bool>> small_number_7 = {{WHITE_, WHITE_, WHITE_}, {BLACK_, BLACK_, WHITE_}, {BLACK_, BLACK_, WHITE_}, {BLACK_, BLACK_, WHITE_}};
// Small Number 8
const vector<vector<bool>> small_number_8 = {{WHITE_, WHITE_, WHITE_}, {WHITE_, WHITE_, WHITE_}, {WHITE_, BLACK_, WHITE_}, {WHITE_, WHITE_, WHITE_}};
// Small Number 9
const vector<vector<bool>> small_number_9 = {{WHITE_, WHITE_, WHITE_}, {WHITE_, WHITE_, WHITE_}, {BLACK_, BLACK_, WHITE_}, {WHITE_, WHITE_, WHITE_}};


// Sudoku number 0
const vector<vector<bool>> su_number_0 = {
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_}};
// Sudoku number 1
const vector<vector<bool>> su_number_1 = {
    {WHITE_},
    {WHITE_},
    {WHITE_}};
// Sudoku number 2 
const vector<vector<bool>> su_number_2 = {
    {WHITE_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, WHITE_}};
// Sudoku number 3 
const vector<vector<bool>> su_number_3= {
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, WHITE_, WHITE_},
    {WHITE_, WHITE_, WHITE_}};
// Sudoku number 4 
const vector<vector<bool>> su_number_4= {
    {WHITE_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, WHITE_}};
// Sudoku number 5 
const vector<vector<bool>> su_number_5= {
    {BLACK_, WHITE_, WHITE_},
    {BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, BLACK_}};
// Sudoku number 6 
const vector<vector<bool>> su_number_6= {
    {WHITE_, BLACK_},
    {WHITE_, WHITE_},
    {WHITE_, WHITE_}};
// Sudoku number 7 
const vector<vector<bool>> su_number_7= {
    {WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, WHITE_}};
// Sudoku number 8 
const vector<vector<bool>> su_number_8= {
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, WHITE_, WHITE_},
    {WHITE_, WHITE_, WHITE_}};
// Sudoku number 9 
const vector<vector<bool>> su_number_9= {
    {WHITE_, WHITE_},
    {WHITE_, WHITE_},
    {BLACK_, WHITE_}};














// Number 0
const vector<vector<bool>> number_0 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, WHITE_, WHITE_},
    {WHITE_, WHITE_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Number 1
const vector<vector<bool>> number_1 = {
    {BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, WHITE_}};

// Number 2
const vector<vector<bool>> number_2 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_, WHITE_}};

// Number 3
const vector<vector<bool>> number_3 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_}};

// Number 4
const vector<vector<bool>> number_4 = {
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, WHITE_, BLACK_},
    {WHITE_, WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, BLACK_, WHITE_, BLACK_}};

// Number 5
const vector<vector<bool>> number_5 = {
    {WHITE_, WHITE_, WHITE_, WHITE_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
};

// Number 6
const vector<vector<bool>> number_6 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
};

// Number 7
const vector<vector<bool>> number_7 = {
    {WHITE_, WHITE_, WHITE_, BLACK_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, WHITE_, BLACK_},
    {BLACK_, WHITE_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
    {WHITE_, BLACK_, BLACK_, BLACK_},
};

// Number 8
const vector<vector<bool>> number_8 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
};

// Number 9
const vector<vector<bool>> number_9 = {
    {BLACK_, WHITE_, WHITE_, BLACK_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {WHITE_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, BLACK_, BLACK_, WHITE_},
    {BLACK_, WHITE_, WHITE_, BLACK_},
};

const map<char, vector<vector<bool>>> dict_letter = {
    {'A', letter_A},
    {'B', letter_B},
    {'C', letter_C},
    {'D', letter_D},
    {'E', letter_E},
    {'F', letter_F},
    {'G', letter_G},
    {'H', letter_H},
    {'J', letter_J},
    {'K', letter_K},
    {'L', letter_L},
    {'M', letter_M},
    {'N', letter_N},
    {'O', letter_O},
    {'P', letter_P},
    {'Q', letter_Q},
    {'R', letter_R},
    {'S', letter_S},
    {'T', letter_T},
    {'U', letter_U},
    {'V', letter_V},
    {'W', letter_W},
    {'X', letter_X},
    {'Y', letter_Y},
    {'Z', letter_Z}};

// Letter Array
const vector<vector<vector<bool>>> letter = {letter_A, letter_B, letter_C, letter_D, letter_E, letter_F, letter_G, letter_H, letter_I, letter_J, letter_K, letter_L, letter_M, letter_N, letter_O, letter_P, letter_Q, letter_R, letter_S, letter_T, letter_U, letter_V, letter_W, letter_X, letter_Y, letter_Z};

// Number Array
const vector<vector<vector<bool>>> su_number = {su_number_0, su_number_1, su_number_2, su_number_3, su_number_4, su_number_5, su_number_6, su_number_7, su_number_8, su_number_9};
const vector<vector<vector<bool>>> number = {number_0, number_1, number_2, number_3, number_4, number_5, number_6, number_7, number_8, number_9};
const vector<vector<vector<bool>>> small_number = {small_number_0, small_number_1, small_number_2, small_number_3, small_number_4, small_number_5, small_number_6, small_number_7, small_number_8, small_number_9};

const map<string, vector<vector<vector<bool>>>> alpha_numeric = {
    {"number", number},
    {"letter", letter}};

#endif
