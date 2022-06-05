#ifndef LAYERS_H
#define LAYERS_H

#include <iostream>
#include "Renderer2D.h"
#include "Renderable2D.h"
#include "Shader.h"
#include "mat4.h"

using namespace std;

class Layer {
protected:
	Renderer2D* Renderer;
	vector<Renderable2D*> Renderables;

	Shader* m_Shader;
	mat4 ProjectionMatrix;

	Layer(Renderer2D* renderer, Shader* shader, mat4 projectionMatrix);
public:
	virtual ~Layer();
	virtual void add(Renderable2D* renderable);
	virtual void render();
	void clean_slate();	
};

#endif
