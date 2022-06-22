#ifndef SUDOKU_H
#define SUDOKU_H

// Essentials
#include <bitset>
#include <cassert>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <map>

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

typedef biset<4> four_bits; 

class Sudoku : public Grid {
private:
	vector<vector<four_bits>> sudoku_grid;	
	vector<four_bits> flat_grid;

public:
	Sudoku();
	void shrinking_square();
	void set_problem(four_bits mode);
};

#endif
