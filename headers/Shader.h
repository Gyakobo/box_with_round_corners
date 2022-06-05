#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include "../src/utils/fileutils.h"
#include <GL/glew.h>
#include <vector>
#include "mat4.h"
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"

using namespace std;

class Shader {
private:
	GLuint load();	
	const char *VertPath, *FragPath, *GeoPath;

	GLint getUniformLocation(const GLchar* name);
	
public:
	GLuint ShaderID;
	Shader(const char* vertPath, const char* fragPath, const char* geoPath);
	~Shader();


	void setUniform1f(const GLchar* name, float value);
	void setUniform1i(const GLchar* name, int value);
	void setUniform2f(const GLchar* name, const vec2& vector);
	void setUniform3f(const GLchar* name, const vec3& vector);
	void setUniform4f(const GLchar* name, const vec4& vector);
	void setUniformMat4(const GLchar* name, const mat4& matrix);

	void enable() const;
	void disable() const;
};


#endif


