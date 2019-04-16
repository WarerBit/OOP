#include "Complex.h"



Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
void Complex::setComplex(double re,double im) {
	this->re = re;
	this->im = im;
}
void Complex::getComplex() {
	std::cout << re << " + (" << im << "i)\n";
}
double Complex::getModule() {
	return(sqrt(re*re + im * im));
}
Complex& Complex::operator=(const Complex& x) {
	re = x.re;
	im = x.im;
	return *this;
}
const Complex operator+(const Complex& x1, const Complex& x2) {
	return Complex(x1.re + x2.re, x1.im + x2.im);
}
const Complex operator-(const Complex& x1, const Complex& x2) {
	return Complex(x1.re - x2.re, x1.im - x2.im);
}
const Complex operator*(const Complex& x1, const Complex& x2) {
	return Complex(x1.re*x2.re - x1.im*x2.im, x1.re*x2.im + x2.re*x1.im);
}
const Complex operator/(const Complex& x1, const Complex& x2) {
	return Complex((x1.re*x2.re + x1.im*x2.im) / (x2.re*x2.re + x2.im*x2.im), (x1.re*x2.im - x1.im*x2.re) / (x2.re*x2.re + x2.im*x2.im));
}

Complex::~Complex()
{
}
