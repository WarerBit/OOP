#include "Complex.h"


Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
Complex::Complex()
{

}
Complex Complex::operator=(const Complex& c) {
	return Complex(c.re, c.im);
}
const Complex operator++(Complex& c, int) {
	Complex complex(c);
	c.re++;
	return complex;
}
const Complex operator--(Complex& c, int) {
	Complex complex(c);
	c.re--;
	return complex;
}
const ostream& operator<<(ostream& out, const Complex& c) {
	out << c.re;
	if (c.im < 0)
		out << c.im << "i";
	else
		out << "+" << c.im << "i";
	return out;
}
const istream& operator>>(istream& in, Complex& c) {
	in >> c.re >> c.im;
	in.get();
	return in;
}
const bool operator==(const Complex& c1, const Complex& c2) {
	return(c1.re == c2.re) && (c1.im == c2.im);
}

Complex::~Complex()
{
}