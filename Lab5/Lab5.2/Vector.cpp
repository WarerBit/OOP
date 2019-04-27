#include "Vector.h"



Vector::Vector()
{
}
Vector::Vector(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector Vector::operator=(const Vector& v) {
	return Vector(v.x, v.y, v.z);
}
const ostream& operator<<(ostream& out, const Vector& v) {
	out << "(" << v.x << "," << v.y << "," << v.z << ")";
	return out;
}
const istream& operator>>(istream& in, Vector& v) {
	in >> v.x >> v.y >> v.z;
	in.get();
	return in;
}
const bool operator==(const Vector& v1, const Vector& v2) {
	return (v1.x == v2.x)&&(v1.y == v2.y)&&(v1.z == v2.z);
}

Vector::~Vector()
{
}
