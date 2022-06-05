#include "../headers/IndexBuffer.h"                                                                       

IndexBuffer::IndexBuffer(GLushort* data, GLsizei count) 
: Count(Count)
{
        Count = count;
    
        glGenBuffers(1, &BufferID);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, BufferID);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, count* sizeof(GLushort), data, GL_STATIC_DRAW);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); 
}


IndexBuffer::IndexBuffer(GLuint* data, GLsizei count) 
: Count(Count)
{
        Count = count;
    
        glGenBuffers(1, &BufferID);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, BufferID);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, count* sizeof(GLuint), data, GL_STATIC_DRAW);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); 
}

IndexBuffer::~IndexBuffer() {
	glDeleteBuffers(1, &BufferID);
}

void IndexBuffer::bind() const {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, BufferID);
}

void IndexBuffer::unbind() const {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); 
}


