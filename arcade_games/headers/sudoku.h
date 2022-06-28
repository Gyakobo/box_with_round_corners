#ifndef SUDOKU_H
#define SUDOKU_H

// Essentials
#include <bitset>
#include <cassert>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <vector>

#include <ctime>

// Import utils library
//#include "../../headers/utils/utils.h"

// Base Class
#include "../../headers/grid.h"

using namespace std;

#define num_null 0B0000
#define num_1 0B0001
#define num_2 0B0010
#define num_3 0B0011
#define num_4 0B0100
#define num_5 0B0101
#define num_6 0B0110
#define num_7 0B0111
#define num_8 0B1000
#define num_9 0B1001

#define EASY	0B0000 
#define Medium	0B0001 
#define Hard 	0B0010
#define Expert 	0B0011
#define Evil 	0B0100

typedef bitset<4> four_bits; 

class Sudoku : public Grid {
private:
	vector<vector<four_bits>> sudoku_grid;	
	vector<int> flat_grid;

public:
	Sudoku();
	void shrinking_square();
	void set_problem();
};

namespace sudoku {

	// #define boxOrigin 0
	// #define rowOrigin 0
	// #define colOrigin 0

	// per box formula, basically needed for the shuffling of numbers in the grid
	// this formula goes through each box instead of the natural order
	// ((i / 3) % 3) * 9 + ((i % 27) / 9) * 3 + (i / 27) * 27 + (i %3)
	/*int formula(int i) {
		return ((i / 3) % 3) * 9 + ((i % 27) / 9) * 3 + (i / 27) * 27 + (i %3);
	}

	// get box origin formula
	// this formula gives the index of the origin of the box that contains index i(0-80)
	// (i % 9) / 3) * 3 + (i / 27) * 27 
	int get_box_origin(int i) {
		return ((i % 9) / 3) * 3 + (i / 27) * 27;
	} 

	// get row origin formula 
	// this formula gives the index of the origin of the row that contains index i(0-80)
	int get_row_origin(int i) {
		return (i/9) * 9;
	}

	// get column origin formula
	// this formula gives the index of the origin of the column that contains index i(0-80)
	int get_column_origin(int i) {
		return (i%9);
	}

	// get box origin formula 
	// this formula gives the index of origin of box # i (0-8)
	int get_box_origin_2(int i) {
		return (i * 3) % 9 + ((i * 3) / 9) * 27;
	}

	// get row origin formula
	// this formula gives the index of origin of row # i (0-9)
	int get_row_origin_2(int i) {
		return (i*9);
	}

	// get box origin formula
	// this formula gives the index of origin of column # i (0-8)
	int get_box_origin_3(int i) {
		return i;
	}

	// box step formula
	// this formula runs through a box shape (i must be less than 9)
	int box_step_formula(int i) {
		return boxOrigin + (i/3) * 9 + (i%3);
	}

	// row step formula
	int row_step_formula(int i) {
		return rowOrigin + i;
	}

	// col step formula
	int col__step_formula(int i) {
		return colOrigin + i*9;
	}*/

}

#endif

















