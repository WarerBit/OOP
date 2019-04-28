#include"Complex.h"
#include<list>

int main()
{
	double re, im;
	list<Complex> complex;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter complex " << i + 1 << " re and im:";
		cin >> re >> im;
		complex.push_back(Complex(re, im));
	}
	cout << endl;
	for (auto c : complex)
		c.getComplex();
	system("pause");
}