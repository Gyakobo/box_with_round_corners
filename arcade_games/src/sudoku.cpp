#include "../headers/sudoku.h"

Sudoku::Sudoku() {
    // Set the flat grid
    vector<four_bits> rows; 

    for (int i=0; i<81; i++) 
        flat_grid.push_back(0);


    // Set the sudoku grid
    for (int i=0; i<9; i++)
        rows.push_back(num_null);

    for (int i=0; i<9; i++)
        sudoku_grid.push_back(rows);

    // Base line sprite creation 
    vector<vec4> row_color;
    const vec4 color = vec4(1, 1, 1, 1);

    for (int i = 0; i < 32; i++)
    {
        row_color.push_back(color);
    }
    for (int i = 0; i < 32; i++)
    {
        sprite.push_back(row_color);
    }

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            DrawOnScreen(x, y, color);
        }
    }

}

void Sudoku::shrinking_square() {
    grid::randomize();
    //srand(time(0));

    for (int i=0; i<81; i+=9) {
        bool visited[9];
        for (int i=0; i<9; i++) visited[i] = false;
        int count=0;
        int num;
        
        while (count < 9) {
            num = grid::rand_range(1, 9);
  
            if (!visited[num-1]) {
                visited[num-1] = true;
                flat_grid.at(i+count) = num;
                count += 1;
            }
        }

    }

}

void Sudoku::set_problem() {
    const vec4 color = vec4(1, 1, 1, 1);

    for (int x = 0; x < 32; x++)
    {
        for (int y = 0; y < 32; y++)
        {
            DrawOnScreen(x, y, color);
        }
    }
}
