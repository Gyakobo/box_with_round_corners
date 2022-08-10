#include "../headers/game_of_life.h"

/** Rules of game of life:
 *TODO 1) Any live cell with fewer than two live neighbours dies(as if by underpopulation)
 *TODO 2) Any live cell with two or three live neighbours lives on to the next generation
 *TODO 3) Any live live cell with more than three live neighbours dies, as if by overpopulation
 *TODO 4) Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction
*/

Game_of_Life::Game_of_Life(const int width, const int height) {
    this->width     = width;
    this->height    = height;

    grid::randomize();

    vector<vec4> row_color;

    for (int i=0; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=0; i<32; i++) {
        sprite.push_back(row_color);
    }
    
    for (int i=0; i<width; i++) {
        for (int j=0; j<height; j++) {
            if (rand() % 10 == 0) display[i][j] = true; 
            else display[i][j] = false;
        }
    }
}

bool Game_of_Life::isAlive(const int x, const int y) {

    /**
     ** "Live" counter
     */
    int alive = 0;


    /**
     ** Basically tests a cross-shaped axis  
    */
    // Testing the left position
    if (x > 0 && display[x-1][y]) alive += 1;
    // Testing the right position
    if (x < width && display[x+1][y]) alive += 1;
    // Testing the top position
    if (y > 0 && display[x][y-1]) alive += 1;
    // Testing the bottom position
    if (y < height && display[x][y+1]) alive += 1;


    /**
     ** Basically tests an x-shaped axis  
    */
    // Testing the top-left position
    if (y > 0 && x > 0 && display[x-1][y-1]) alive += 1;
    // Testing the top-right position
    if (y > 0 && x < width && display[x+1][y-1]) alive += 1;
    // Testing the bottom-left position
    if (y < height && x > 0 && display[x-1][y+1]) alive += 1;
    // Testing the bottom-right position
    if (y < height && x < width && display[x+1][y+1]) alive += 1;


    /**
     ** Return states 
     */
    // Alive and fewer than 2 -> die
    if (display[x][y] && alive < 2) return false;
    // Alive and 2 or 3 -> live
    if (display[x][y] && (alive == 2 || alive == 3)) return true;
    // more than 3 live -> die
    if (alive > 3) return false;
    // 3 alive and point is dead -> come to life
    if (!display[x][y] && alive == 3) return true;

    /**
     ** Return statement  
     */

    return false;
}


void Game_of_Life::Draw() {
    
    // Check whether point is alive
    for (int i=0; i<width; ++i) 
        for (int j=0; j<height; ++j) 
            swap[i][j] = isAlive(i, j) ? true : false;


    // Draw points
    for (int i=0; i<width; ++i) 
        for (int j=0; j<height; ++j) {
            if(swap[i][j]) DrawOnScreen(i, j, white_color);
            else DrawOnScreen(i, j, blank); 
        }


    // Swap buffers
    //display = swap;
    for (int i=0; i<width; i++)
        for (int j=0; j<height; j++)
            display[i][j] = swap[i][j];
}

