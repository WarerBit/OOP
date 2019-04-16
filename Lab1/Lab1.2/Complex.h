#pragma once
#include<iostream>
class Complex
{
private:
	double re;
	double im;
public:
	Complex();
	Complex(double, double);
	void setComplex(double re,double im);
	void getComplex();
	double getModule();
	Complex& operator=(const Complex&);
	friend const Complex operator+(const Complex&,const Complex&);
	friend const Complex operator-(const Complex&, const Complex&);
	friend const Complex operator*(const Complex&, const Complex&);
	friend const Complex operator/(const Complex&, const Complex&);
	~Complex();
};

