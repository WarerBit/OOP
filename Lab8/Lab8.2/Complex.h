#pragma once
#include<iostream>
#include<cmath>

using namespace std;
class Complex
{
private:
	double re;
	double im;
public:
	Complex()
	{
	}
	Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}
	void getComplex() {
		cout << re;
		if (im > 0)
			cout << "+" << im << "i";
		else
			cout << im << "i";
		cout << endl;
	}
	~Complex()
	{
	}
};

