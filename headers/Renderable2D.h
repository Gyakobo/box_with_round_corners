#ifndef RENDERABLE2D_H
#define RENDERABLE2D_H

#include <iostream>

#include "Buffer.h" 
#include "VertexArray.h" 
#include "IndexBuffer.h" 

#include "vec2.h" 
#include "vec3.h" 
#include "vec4.h" 
#include "mat4.h"

#include "Shader.h" 

using namespace std;

struct VertexData {
	vec3 vertex;
	vec4 color;
	vec3 normal;
};

class Renderable2D {
protected:
	vec3 PositionA;
	vec3 PositionB;
	vec3 PositionC;
	//vec2 Size;
	vec4 Color;

public:	
	Renderable2D(vec3 positionA, vec3 positionB, vec3 positionC, vec4 color) 
	: PositionA(positionA), PositionB(positionB), PositionC(positionC), Color(color) {}
	/*Renderable2D(vec3 position, vec2 size, vec4 color) 
	: Position(position), Size(size), Color(color) {}*/

	virtual ~Renderable2D() {}

	inline const vec3& getPositionA() const { return PositionA; }
	inline const vec3& getPositionB() const { return PositionB; }
	inline const vec3& getPositionC() const { return PositionC; }
	//inline const vec2& getSize() const { return Size; }
	inline const vec4& getColor() const { return Color; }

};

#endif
