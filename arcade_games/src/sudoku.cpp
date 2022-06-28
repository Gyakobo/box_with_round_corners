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

// Break jumps out of a for loop
// Continue just continues with the next iteration of a loop

void Sudoku::shrinking_square() {
    grid::randomize();

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
    
    // tracks rows and columns that have been sorted
    vector<bool> sorted; 

    for(int i = 0; i < 9; i++) {
        bool backtrack = false;
        //0 is row, 1 is column
        for(int a = 0; a<2; a++) {
            //every number 1-9 that is encountered is registered
            bool registered[10]; //index 0 will intentionally be left empty since there are only number 1-9.
            int rowOrigin = i * 9;
            int colOrigin = i;
            
            ROW_COL: 
            for(int j = 0; j < 9; j++) {
                //row/column stepping - making sure numbers are only registered once and marking which cells have been sorted
                int step = (a%2==0? rowOrigin + j: colOrigin + j*9);
                int num = flat_grid[step];
              
                if(!registered[num]) registered[num] = true;
                else //if duplicate in row/column
                {
                    //box and adjacent-cell swap (BAS method)
                    //checks for either unregistered and unsorted candidates in same box,
                    //or unregistered and sorted candidates in the adjacent cells
                    for(int y = j; y >= 0; y--) {
                        int scan = (a%2==0? i * 9 + y: i + 9 * y);
                        if(flat_grid[scan] == num) {
                        //box stepping
                            for(int z = (a%2==0? (i%3 + 1) * 3: 0); z < 9; z++) {
                                if(a%2 == 1 && z%3 <= i%3)
                                    continue;
                     
                                    int boxOrigin = ((scan % 9) / 3) * 3 + (scan / 27) * 27;
                                    int boxStep = boxOrigin + (z / 3) * 9 + (z % 3);
                                    int boxNum = flat_grid[boxStep];
                                    if((!sorted[scan] && !sorted[boxStep] && !registered[boxNum]) || (sorted[scan] && !registered[boxNum] && (a%2==0? boxStep%9==scan%9: boxStep/9==scan/9))) {
                                        flat_grid[scan] = boxNum;
                                        flat_grid[boxStep] = num;
                                        registered[boxNum] = true;
                                        // continue ROW_COL, java
                                        continue;
                                        goto ROW_COL;
                                    }
                                else if(z == 8) //if z == 8, then break statement not reached: no candidates available
                                {
                                    //Preferred adjacent swap (PAS)
                                    //Swaps x for y (preference on unregistered numbers), finds occurence of y
                                    //and swaps with z, etc. until an unregistered number has been found
                                    int searchingNo = num;
                                             
                                    //noting the location for the blindSwaps to prevent infinite loops.
                                    bool blindSwapIndex[81];
                                 
                                    //loop of size 18 to prevent infinite loops as well. Max of 18 swaps are possible.
                                    //at the end of this loop, if continue or break statements are not reached, then
                                    //fail-safe is executed called Advance and Backtrack Sort (ABS) which allows the 
                                    //algorithm to continue sorting the next row and column before coming back.
                                    //Somehow, this fail-safe ensures success.
                                    for(int q = 0; q < 18; q++) {
                                    SWAP: 
                                        for(int b = 0; b <= j; b++) {
                                            int pacing = (a%2==0? rowOrigin+b: colOrigin+b*9);
                                            
                                            if(flat_grid[pacing] == searchingNo) {
                                                int adjacentCell = -1;
                                                int adjacentNo = -1;
                                                int decrement = (a%2==0? 9: 1);
                                          
                                                for(int c = 1; c < 3 - (i % 3); c++)
                                                {
                                                    adjacentCell = pacing + (a%2==0? (c + 1)*9: c + 1);
                                             
                                                    //this creates the preference for swapping with unregistered numbers
                                                    if((a%2==0 && adjacentCell >= 81) || (a%2==1 && adjacentCell % 9 == 0)) adjacentCell -= decrement;
                                                    else {
                                                        adjacentNo = flat_grid[adjacentCell];
                                                        if(i%3!=0 || c!=1 || blindSwapIndex[adjacentCell] || registered[adjacentNo]) adjacentCell -= decrement;
                                                    }
                                                    adjacentNo = flat_grid[adjacentCell];
                                             
                                                    //as long as it hasn't been swapped before, swap it
                                                    if(!blindSwapIndex[adjacentCell]) {
                                                        blindSwapIndex[adjacentCell] = true;
                                                        flat_grid[pacing] = adjacentNo;
                                                        flat_grid[adjacentCell] = searchingNo;
                                                        searchingNo = adjacentNo;
                                                      
                                                        if(!registered[adjacentNo]) {
                                                            registered[adjacentNo] = true;
                                                            // continue ROW_COL, java
                                                            continue;
                                                            goto ROW_COL;
                                                        }
                     
                                                        //break SWAP, java;
                                                        goto SWAP;
                                                    }
                                               }
                                            }
                                        }
                                    }
                                    
                                    //begin Advance and Backtrack Sort (ABS)
                                    backtrack = true;
                                    //break ROW_COL;
                                    goto ROW_COL;
                                }
                            }
                        }
                    }
                }
            }
               
            if(a%2==0) for(int j = 0; j < 9; j++) sorted[i*9+j] = true; //setting row as sorted
            
            else if(!backtrack) for(int j = 0; j < 9; j++) sorted[i+j*9] = true; //setting column as sorted
            
            else //reseting sorted cells through to the last iteration
            {
                backtrack = false;
                for(int j = 0; j < 9; j++) sorted[i*9+j] = false;
                for(int j = 0; j < 9; j++) sorted[(i-1)*9+j] = false;
                for(int j = 0; j < 9; j++) sorted[i-1+j*9] = false;
                i-=2;
            }
        }
    }

    //if(!isPerfect(flat_grid)) throw new RuntimeException("ERROR: Imperfect flat_grid generated.");
    //return flat_grid;
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
