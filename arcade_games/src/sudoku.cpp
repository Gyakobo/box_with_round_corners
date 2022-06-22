#include "../headers/sudoku.h"



Sudoku::Sudoku() {
    vector<four_bits> rows; 

    for (int i=0; i<81; i++) 
        flat_grid.push_back(num_null);


    for (int i=0; i<9; i++)
        rows.push_back(num_null);

    for (int i=0; i<9; i++)
        sudoku_grid.push_back(rows);

    //sudoku_grid.push_back()
}

Sudoku::shrinking_square() {
    randomize();

    for (int i=0; i<81; i++)
        flat_grid.at(i) = rand() % 10 + 1;
}

Sudoku::set_problem(four_bits mode=EASY) {

}

