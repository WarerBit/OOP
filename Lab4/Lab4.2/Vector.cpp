#include "Vector.h"


Vector::Vector(int x,int y,int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector::Vector()
{

}

Vector::Vector(const Vector& vec_obj)
{
}

void Vector::getModule() {
	cout << "Module = " << sqrt(x*x + y * y + z * z) << endl;
}

void Vector::getVec() {
	cout << "(" << x <<"," << y << "," << z << ")" << endl;
}
Vector& Vector::operator=(const Vector& a) {
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}

const Vector operator+(const Vector& a, const Vector& b) {
	return Vector(a.x + b.x, a.y + b.y, a.z + b.z);
}

const Vector operator-(const Vector& a, const Vector& b) {
	return Vector(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector::~Vector()
{
}
