#ifndef VEC3_H 
#define VEC3_H 

#include <iostream>
#include <math.h> 

using namespace std;

struct vec3 {
	float x, y, z;

	vec3();
	vec3(const float& x, const float& y, const float& z);

	vec3& add(const vec3& other);
	vec3& subtract(const vec3& other);
	vec3& multiply(const vec3& other);
	vec3& divide(const vec3& other);

	static vec3 multiply(const float& a, const vec3& other) {
		vec3 returnVector = other;
		returnVector.x *= a;
		returnVector.y *= a;
		returnVector.z *= a;
		return returnVector;	
	}
	static vec3 divid(const float& a, const vec3& other) {
		vec3 returnVector = other;
		returnVector.x /= a;
		returnVector.y /= a;
		returnVector.z /= a;
		return returnVector;	
	}
	
	void normalize() {
                float c = sqrt(x*x + y*y + z*z);
                x /= c;
                y /= c;
                z /= c;
        }

	static vec3 normalize(const vec3& v) {
		vec3 returnVector = v;
		
                float c = sqrt(v.x*v.x + v.y*v.y + v.z*v.z);

		returnVector.x /= c;
		returnVector.y /= c;
		returnVector.z /= c;

		return returnVector;
	}
	
        static vec3 product(const float a, vec3& v) {
                vec3 returnVector = v;

                returnVector.x *= a;
                returnVector.y *= a;
                returnVector.z *= a;

                return returnVector;
        }

	static vec3 CrossProduct(const vec3& vec1, const vec3& vec2);
	static float DotProduct(const vec3& vec1, const vec3& vec2);
	
	float length() { return sqrt(x*x + y*y + z*z); }

	friend vec3& operator+(vec3 left, const vec3& right);
	friend vec3& operator-(vec3 left, const vec3& right);
	friend vec3& operator*(vec3 left, const vec3& right);
	friend vec3& operator/(vec3 left, const vec3& right);

	vec3& operator+=(const vec3& other);
	vec3& operator-=(const vec3& other);
	vec3& operator*=(const vec3& other);
	vec3& operator/=(const vec3& other);

	vec3& operator*(const float& a) {
		x *= a;
		y *= a;
		z *= a;
		return *this;
	}
	vec3& operator/(const float& a) {
		x /= a;
		y /= a;
		z /= a;
		return *this;
	}
	
	bool operator==(const vec3& other);
	bool operator!=(const vec3& other);

	friend ostream& operator<<(ostream& stream, const vec3& vector)	{
		stream << "vec3: (" << vector.x << ", " << vector.y << ", " << vector.z <<  ")";
		return stream;
	}

	
};

#endif
