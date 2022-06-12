#ifndef GRID_H
#define GRID_H

// Essentials
#include <stdio.h>
#include <math.h>

// Dependancies
#include <vector>
#include "alpha_numeric.h"
#include "Renderable2D.h"
#include "sprite.h"

using namespace std;

/*
y - is inversed
^
|
|
|
* -------> x
*/

class Grid {
private:
	vector<Renderable2D*> sprites = {};

	vector<vector<vec4>> sprite;
	void DrawOnScreen(int& x, int& y, const vec4& color);


	/* Future poleomorhic virtual classes 
	void Pong();
	void Snake();
	void Tetris();
	void Space_Invaders();
	void Pixelated_Image();
	*/

public:
	Grid();
	
	void update();
	void Default_State();
	void Random();


	vector<Renderable2D*> getRenderables() { return sprites; }
};

void randomize();

#endif
