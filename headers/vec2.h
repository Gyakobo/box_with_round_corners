#ifndef VEC2_H 
#define VEC2_H 

#include <iostream>

using namespace std;

struct vec2 {
	float x, y;

	vec2();
	vec2(const float& x, const float& y);

	vec2& add(const vec2& other);
	vec2& subtract(const vec2& other);
	vec2& multiply(const vec2& other);
	vec2& divide(const vec2& other);

	friend vec2& operator+(vec2 left, const vec2& right);
	friend vec2& operator-(vec2 left, const vec2& right);
	friend vec2& operator*(vec2 left, const vec2& right);
	friend vec2& operator/(vec2 left, const vec2& right);

	vec2& operator+=(const vec2& other);
	vec2& operator-=(const vec2& other);
	vec2& operator*=(const vec2& other);
	vec2& operator/=(const vec2& other);

	bool operator==(const vec2& other);
	bool operator!=(const vec2& other);

	friend ostream& operator<<(ostream& stream, const vec2& vector)	{
		stream << "vec2: (" << vector.x << ", " << vector.y << ")";
		return stream;
	}
};

#endif
