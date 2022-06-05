#include "../headers/Buffer.h"

Buffer::Buffer(GLfloat* data, GLsizei count, GLuint componentCount) 
: ComponentCount(componentCount)
{
	ComponentCount = componentCount;
	
	glGenBuffers(1, &BufferID);
	glBindBuffer(GL_ARRAY_BUFFER, BufferID);
	glBufferData(GL_ARRAY_BUFFER, count* sizeof(GLfloat), data, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

Buffer::~Buffer() {
	glDeleteBuffers(1, &BufferID);
}

void Buffer::bind() const {
	glBindBuffer(GL_ARRAY_BUFFER, BufferID);
}

void Buffer::unbind() const {
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

