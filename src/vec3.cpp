#include "../headers/vec3.h"

vec3::vec3() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}
vec3::vec3(const float& x, const float& y, const float& z) {
	this->x = x;
	this->y = y;
	this->z = z;
}





vec3& vec3::add(const vec3& other) {
	x += other.x;	
	y += other.y;	
	z += other.z;	

	return *this;
}
vec3& vec3::subtract(const vec3& other) {
	x -= other.x;	
	y -= other.y;	
	z -= other.z;	

	return *this;
}
vec3& vec3::multiply(const vec3& other) {
	x *= other.x;	
	y *= other.y;	
	z *= other.z;	

	return *this;
}
vec3& vec3::divide(const vec3& other) {
	x /= other.x;	
	y /= other.y;	
	z /= other.z;	

	return *this;
}



vec3& operator+(vec3 left, const vec3& right) {
	return left.add(right);
}
vec3& operator-(vec3 left, const vec3& right) {
	return left.subtract(right);
}
vec3& operator*(vec3 left, const vec3& right) {
	return left.multiply(right);
}
vec3& operator/(vec3 left, const vec3& right) {
	return left.divide(right);
}






vec3& vec3::operator+=(const vec3& other) {
	return add(other);
}
vec3& vec3::operator-=(const vec3& other) {
	return subtract(other);
}
vec3& vec3::operator*=(const vec3& other) {
	return multiply(other);
}

vec3& vec3::operator/=(const vec3& other) {
	return divide(other);
}


bool vec3::operator==(const vec3& other) {
	if (x == other.x && y == other.y) return true;
	else false;	
}
bool vec3::operator!=(const vec3& other) {
	return !(*this == other);	
}

vec3 vec3::CrossProduct(const vec3& vec1, const vec3& vec2) {
	return vec3(vec1.y*vec2.z - vec1.z*vec2.y, vec1.z*vec2.x-vec1.x*vec2.z, vec1.x*vec2.y-vec1.y*vec2.x);
}

float vec3::DotProduct(const vec3& vec1, const vec3& vec2) {
	return vec1.x*vec2.x + vec1.y*vec2.y + vec1.z*vec2.z;
}








