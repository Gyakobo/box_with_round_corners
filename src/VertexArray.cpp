#include "../headers/VertexArray.h"

VertexArray::VertexArray() {
	glGenVertexArrays(1, &ArrayID);
}

VertexArray::~VertexArray() {
	for (int i=0; i<Buffers.size(); i++) {
		delete Buffers.at(i);
	}
	glDeleteVertexArrays(1, &ArrayID);
}

void VertexArray::addBuffer(Buffer* buffer, GLuint index) {
	bind();	
	buffer->bind();	
	
	glEnableVertexAttribArray(index);
	glVertexAttribPointer(index, buffer->getComponentCount(), GL_FLOAT, GL_FALSE, 0, 0);
	// In basic.vert file, it basicaly corresonds to "layout location= 0 in vec4 position" 

	buffer->unbind();	
	unbind();	
}

void VertexArray::bind() const {
	glBindVertexArray(ArrayID);
}

void VertexArray::unbind() const {
	glBindVertexArray(0);
}


