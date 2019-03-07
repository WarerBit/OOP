#pragma once
#define V_X 1
#define V_Y 2
#define V_Z 3

class Vector
{
	double x;
	double y;
	double z;
public:
	Vector();
	
	void setVectorCoord(double x, double y, double z);

	double getVectorCoord(int name);

	void sumVector(Vector sum);

	~Vector();
};

