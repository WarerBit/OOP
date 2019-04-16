#include"Complex.h"
#include<iostream>

using namespace std;
int main()
{
	double re, im;
	cout << "Enter Re and Im for Complex1:";
	cin >> re >> im;
	Complex c1(re, im);
	cout << "Enter Re and Im for Complex2:";
	cin >> re >> im;
	Complex c2(re, im);

	cout << "Complex1 = ";
	c1.getComplex();
	cout << "Module = " << c1.getModule() << endl << endl;
	cout << "Complex2 = ";
	c2.getComplex();
	cout << "Module = " << c2.getModule() << endl << endl;

	
	cout << "Complex1 + Complex2 = ";
	Complex c3 = c1 + c2;
	c3.getComplex();
	cout << "Module = " << c3.getModule() << endl << endl;

	cout << "Complex1 - Complex2 = ";
	c3 = c1 - c2;
	c3.getComplex();
	cout << "Module = " << c3.getModule() << endl << endl;

	cout << "Complex1 * Complex2 = ";
	c3 = c1 * c2;
	c3.getComplex();
	cout << "Module = " << c3.getModule() << endl << endl;

	cout << "Complex1 / Complex2 = ";
	c3 = c1 / c2;
	c3.getComplex();
	cout << "Module = " << c3.getModule() << endl << endl;

	system("pause");
}