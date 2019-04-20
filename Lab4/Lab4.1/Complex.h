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
	Complex();
	Complex(const Complex& compl_obj);
	Complex(double, double);
	~Complex();
	void getModule();
	void getArg();
};

