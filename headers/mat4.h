#ifndef MAT4_H
#define MAT4_H

#include <iostream>
#include "vec3.h"
#include "vec4.h"
#include <math.h>

#define _USE_MATH_DEFINES

struct mat4 {
	union {
		float elements[4 * 4];
		vec4 columns[4];
	};

	// Matrix constructors
	mat4();
	mat4(float diagonal);	

	/*vec4 getColumn(int index) {
		index *= 4;
		return vec4(elements[index], elements[index+1], elements[index+2], elements[index+3]);
	}*/

	// Matrix operations		
	static mat4 identity();
	mat4& multiply(const mat4& other);
	friend mat4 operator*(mat4 left, const mat4& right);
	mat4& operator*=(const mat4& other);
	

	// Matirx imagery 
	static mat4 orthographic(float left, float right, float bottom, float top, float near, float far);	
	static mat4 perspective(float fov, float aspectRatio, float near, float far);	


	// Matrix manipulation		
	static mat4 translation(const vec3& translation);
	static mat4 rotation(float angle, const vec3& axis);
	static mat4 scale(const vec3& scale);
};

inline float toRadians(float degrees) {
	return degrees * (M_PI / 180.0f);
}

#endif
