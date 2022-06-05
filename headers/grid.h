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
#define WHITE		vec4(255, 255, 255, 1)
#define RED			vec4(255, 0, 0, 1)
#define GREEN		vec4(0, 255, 0, 1)
#define BLUE		vec4(0, 0, 255, 1)
#define RAND_COLOR	vec4(rand()%1000/1000.0f, rand()%1000/1000.0f, rand()%1000/1000.0f, 1.0f)


using namespace std;

/*

* -------> x
|
|
|
\/
y

*/

class Grid {
private:
	int width, height;	

	vector<Renderable2D*> sprites = {};

	void Pong();
	void Snake();
	void Tetris();
	void Space_Invaders();

public:
	Grid(int width, int height);

	vector<Renderable2D*> getRenderables() { return sprites; }

};


#endif
