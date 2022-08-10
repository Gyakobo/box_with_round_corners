#ifndef SAMPLE_OBJECTH
#define SAMPLE_OBJECTH

#include <iostream> 
#include <stdio.h>

#include <math.h>
#include <vector>
#include "Renderable2D.h" 
#include "sprite.h" 
#include "vec2.h"
#include "vec3.h"


using namespace std;


class Sample_Object {
public:
	Sample_Object() {
		vec3 point1 = vec3(0, 0, 0);
		vec3 point2 = vec3(1, 0, 0);
		vec3 point3 = vec3(1, 1, 0);
		sprites.push_back(new Sprite(point1, point2, point3, vec4(1.0f, 1.0f, 1.0f, 1.0f)));
		
		point1 = vec3(0, 0, 0);
		point2 = vec3(1, 1, 0);
		point3 = vec3(0, 1, 0);
		sprites.push_back(new Sprite(point1, point2, point3, vec4(1.0f, 1.0f, 1.0f, 1.0f)));
	}

	vector<Renderable2D*> getRenderables() {
        return sprites;
    }


private:
	vector<Renderable2D*> sprites;

};

#endif

