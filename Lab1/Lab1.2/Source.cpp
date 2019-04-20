#include"Complex.h"
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream filex("complex.txt");

	double max = -1;
	Complex c;

	int n;
	filex >> n;

	for (int i = 0; i < n; i++) {
		Complex c1;
		double re, im;
		filex >> re >> im;
		filex.get();
		c1.setComplex(re, im);
		if (c1.getModule() > max)
			c = c1;
		max = c.getModule();
	}

	cout << "MaxModule = " << max << endl << "It's module of complex =";
	c.getComplex();

	filex.close();
	system("pause");
}