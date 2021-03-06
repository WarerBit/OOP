#pragma once
#include<iostream>
#include<cmath>

using namespace std;

class Vector
{
private:
	int x;
	int y;
	int z;
public:
	
	Vector();
	Vector(const Vector& vec_obj);
	Vector(int,int,int);
	~Vector();
	void getModule();
	void getVec();
	Vector& operator=(const Vector&);
	friend const Vector operator+(const Vector&, const Vector&);
	friend const Vector operator-(const Vector&, const Vector&);
};

