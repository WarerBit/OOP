#include "Complex.h"


Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

void Complex ::getModule() {
	cout << "Module = " << (sqrt(re*re + im * im)) << endl;
}

void Complex ::getArg() {
	if (re > 0)
		cout << "Argument = " << atan(im/re) << endl;
	if ((re < 0) and (im >= 0))
		cout << "Argument = " << atan(im/re) << "+ pi\n";
	if ((re < 0) and (im < 0))
		cout << "Argument = " << atan(im/re) << "- pi\n" ;
}

Complex::~Complex()
{
}
