#include "../headers/Shader.h"

Shader::Shader(const char* vertPath, const char* fragPath, const char* geoPath) 
: VertPath(vertPath), FragPath(fragPath), GeoPath(geoPath) {
	ShaderID = load();
}
Shader::~Shader() {
	glDeleteProgram(ShaderID);
}
	
GLuint Shader::load() {
	GLuint program = 		glCreateProgram();
	GLuint vertex = 		glCreateShader(GL_VERTEX_SHADER);
	GLuint fragment = 		glCreateShader(GL_FRAGMENT_SHADER);
	//GLuint geometry = 		glCreateShader(GL_GEOMETRY_SHADER);


	string vertSourceString = 	FileUtils::read_file(VertPath);
	string fragSourceString = 	FileUtils::read_file(FragPath);
	//string geoSourceString = 	FileUtils::read_file(GeoPath);
	
	const char* vertSource = 	vertSourceString.c_str();
	const char* fragSource = 	fragSourceString.c_str();
	//const char* geoSource = 	geoSourceString.c_str();


	glShaderSource(vertex, 1, &vertSource, NULL);
	glCompileShader(vertex);
	GLint result;
	glGetShaderiv(vertex, GL_COMPILE_STATUS, &result);
	if (result == GL_FALSE)	{
		GLint length;
		glGetShaderiv(vertex, GL_INFO_LOG_LENGTH, &length);
		vector<char> error(length);
		glGetShaderInfoLog(vertex, length, &length, &error[0]);
		cout << "Failed to compile vertex shader" << endl << &error[0] << endl;
		glDeleteShader(vertex);
		return 0;
	}
	
	
	glShaderSource(fragment, 1, &fragSource, NULL);
	glCompileShader(fragment);
	glGetShaderiv(fragment, GL_COMPILE_STATUS, &result);
	if (result == GL_FALSE)	{
		GLint length;
		glGetShaderiv(fragment, GL_INFO_LOG_LENGTH, &length);
		vector<char> error(length);
		glGetShaderInfoLog(fragment, length, &length, &error[0]);
		cout << "Failed to compile fragment shader" << endl << &error[0] << endl;
		glDeleteShader(fragment);
		return 0;
	}


	/*glShaderSource(geometry, 1, &geoSource, NULL);
	glCompileShader(geometry);
	glGetShaderiv(geometry, GL_COMPILE_STATUS, &result);
	if (result == GL_FALSE)	{
		GLint length;
		glGetShaderiv(geometry, GL_INFO_LOG_LENGTH, &length);
		vector<char> error(length);
		glGetShaderInfoLog(geometry, length, &length, &error[0]);
		cout << "Failed to compile fragment shader" << endl << &error[0] << endl;
		glDeleteShader(geometry);
		return 0;
	}*/


	glAttachShader(program, vertex);
	glAttachShader(program, fragment);
	//glAttachShader(program, geometry);

	glLinkProgram(program);
	glValidateProgram(program);	

	glDeleteShader(vertex);
	glDeleteShader(fragment);
	//glDeleteShader(geometry);

	return program;
}

void Shader::enable() const {
	glUseProgram(ShaderID);
}


void Shader::disable() const {
	glUseProgram(0);
}

GLint Shader::getUniformLocation(const GLchar* name) {
	glGetUniformLocation(ShaderID, name);
}                                                                                         

void Shader::setUniform1f(const GLchar* name, float value) {
	glUniform1f(getUniformLocation(name), value);
}
void Shader::setUniform1i(const GLchar* name, int value) {
	glUniform1i(getUniformLocation(name), value);
}
void Shader::setUniform2f(const GLchar* name, const vec2& vector) {
	glUniform2f(getUniformLocation(name), vector.x, vector.y);
}
void Shader::setUniform3f(const GLchar* name, const vec3& vector) {
	glUniform3f(getUniformLocation(name), vector.x, vector.y, vector.z);
}

void Shader::setUniform4f(const GLchar* name, const vec4& vector) {
	glUniform4f(getUniformLocation(name), vector.x, vector.y, vector.z, vector.w);
}
void Shader::setUniformMat4(const GLchar* name, const mat4& matrix) {
	glUniformMatrix4fv(getUniformLocation(name), 1, GL_FALSE, matrix.elements);
}











