#ifndef GRID_H
#define GRID_H

// Essentials
//#include <stdio.h>
//#include <math.h>

// Dependancies
//#include <vector>
//#include "Renderable2D.h"
//#include "sprite.h"

// Header with alpha-numeric symbols and colors
#include "alpha_numeric.h"

using namespace std;

/*
y - is inversed in this graph
^
|
|
|
* -------> x
*/

class Grid {
protected:
	vector<Renderable2D*> sprites = {};

	vector<vector<vec4>> sprite;
	void DrawOnScreen(int& x, int& y, const vec4& color); // Draws on screen

public:
	Grid();
	void update(); // Updates the screen

	// Basic Animations on the screen
	void alpha_numeric_test();	
	void Default_State();
	void Random();


	vector<Renderable2D*> getRenderables() { return sprites; }
};

void randomize();

#endif
