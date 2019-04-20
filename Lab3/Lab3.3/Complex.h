#pragma once
#include<cmath>
#include<iostream>

using namespace std;

class Complex
{
private:
	double re;
	double im;
public:
	Complex(double, double);
	~Complex();
	void getModule();
	void getArg();
};

