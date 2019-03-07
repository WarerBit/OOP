#include "Vector.h"



Vector::Vector()
{
	x = 0; 
	y = 0; 
	z = 0;
}

void Vector::setVectorCoord(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

double Vector::getVectorCoord(int name) {
	if (name == V_X)
		return x;
	if (name == V_Y)
		return y;
	if (name == V_Z)
		return z;
}

void Vector::sumVector(Vector sum) {
	x += sum.getVectorCoord(V_X);
	y += sum.getVectorCoord(V_Y);
	z += sum.getVectorCoord(V_Z);
}

Vector::~Vector()
{
}
