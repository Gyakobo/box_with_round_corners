#ifndef VERTEXARRAY_H
#define VERTEXARRAY_H

#include <iostream>
#include <stdio.h>
#include <vector>
#include <GL/glew.h>
#include "Buffer.h"

class VertexArray {
private:
	GLuint ArrayID;
	vector<Buffer*> Buffers;
public:
	VertexArray();	
	~VertexArray();	
	void addBuffer(Buffer* buffer, GLuint index);
	void bind() const;
	void unbind() const;
};

#endif









