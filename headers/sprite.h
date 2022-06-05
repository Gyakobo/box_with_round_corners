#ifndef SPRITE_H
#define SPRITE_H

#include "Renderable2D.h"

struct Sprite : public Renderable2D {
public:	
	//Sprite(float x, float y, float width, float height, const vec4& color);	
	Sprite(vec3 PosA, vec3 PosB, vec3 PosC, const vec4& color);	
};

#endif
