#pragma once
#include<cmath>
#include<iostream>

using namespace std;

class Complex
{
protected:
	double re;
	double im;
public:
	Complex(double, double);
	Complex();
	~Complex();
	Complex operator=(const Complex&);
	friend const Complex operator++(Complex&,int);
	friend const Complex operator--(Complex&,int);
	friend const ostream& operator<<(ostream&,const Complex&);
	friend const istream& operator>>(istream&, Complex&);
	friend const bool operator==(const Complex&, const Complex&);

};
