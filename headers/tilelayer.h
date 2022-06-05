#ifndef TILELAYER_H
#define TILELAYER_H

#include <iostream>

#include "Layer.h"
#include "Shader.h"
#include "mat4.h"
#include "BatchRenderer2D.h"

using namespace std;

class TileLayer : public Layer {
public:
	TileLayer(Shader* shader);	
	~TileLayer();
};


#endif
