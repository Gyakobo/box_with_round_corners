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
//#include "utils/utils.h"

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

namespace grid {
	void randomize();
	int rand_range(int start, int end);

	enum eDir {
        STOP =		0,
        
		LEFT =		1,
        RIGHT =		2,
		UP =		3,
		DOWN =		4,

		UPLEFT =	5,
        DOWNLEFT =	6,
        UPRIGHT =	7,
        DOWNRIGHT =	8,
	};

}

#endif
