#ifndef RENDERER2D_H
#define RENDERER2D_H

#include <iostream>
#include <GL/glew.h>

#include "Renderable2D.h"

using namespace std;

class Renderer2D {
public:
	virtual void begin() {}
	virtual void end() {}
	virtual void submit(const Renderable2D* renderable1) = 0;
	virtual void flush() = 0;
};

#endif
