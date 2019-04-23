#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class Vector
{
	int x;
	int y;
	int z;
public:
	Vector(int, int, int);
	Vector();
	~Vector();
	Vector operator=(const Vector&);
	friend const ostream& operator<<(ostream&, const Vector&);
	friend const istream& operator>>(istream&, Vector&);
	friend const bool operator==(const Vector&, const Vector&);
};

