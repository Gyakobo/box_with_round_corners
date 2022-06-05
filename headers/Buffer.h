#ifndef BUFFER_H
#define BUFFER_H

#include <iostream>
#include <GL/glew.h>

using namespace std;

class Buffer {
private:
	GLuint BufferID;
	GLuint ComponentCount; // 
public:
	Buffer(GLfloat* data, GLsizei count, GLuint componentCount);
	~Buffer();
	
	void bind() const;
	void unbind() const;

	inline GLuint getComponentCount() const { return ComponentCount; }
};

#endif
