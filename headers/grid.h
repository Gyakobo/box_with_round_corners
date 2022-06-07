#ifndef GRID_H
#define GRID_H

// Essentials
#include <stdio.h>
#include <math.h>

// Dependancies
#include <vector>
#include "Renderable2D.h"
#include "sprite.h"

// Colors
#define DEFAULT		vec4(186, 0, 0, 1)
#define WHITE		vec4(255, 255, 255, 1)
#define RED			vec4(255, 0, 0, 1)
#define GREEN		vec4(0, 255, 0, 1)
#define BLUE		vec4(0, 0, 255, 1)
#define RAND_COLOR	vec4(rand()%1000/1000.0f, rand()%1000/1000.0f, rand()%1000/1000.0f, 1)


using namespace std;

/*
y - is inversed
y
^
|
|
|
* -------> x

*/

class Grid {
private:
	vector<Renderable2D*> sprites = {};

	vector<vector<vec4>> color;
	void DrawOnScreen(int x, int y, vec4 color);

	void Pong();
	void Snake();
	void Tetris();
	void Space_Invaders();


public:
	Grid();
	
	void update();

	vector<Renderable2D*> getRenderables() { return sprites; }

};


#endif
