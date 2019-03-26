#include "pch.h"
#include <iostream>

using namespace std;

void sum(int a, int b);
void sum(double a, double b);

void dif(int a,int b);
void dif(double a, double b);

void prod(int a, int b);
void prod(double a, double b);

void quot(int a, int b);
void quot(double a, double b);

int main()
{
	char z; int n,a,b; double a1, b1;
	cout << "S kakimi chislami vi hotite rabotat'? 1 - celie, 0 - drobnie:";
	cin >> n;
	cout << "Vvedite 2 chisla:";
	if (n)
		cin >> a >> b;
	else
		cin >> a1 >> b1;
	cout << "Vvedite znak(+,-,*,/):";
	cin >> z;
	switch (z) 
	{
	case '+':
	{
		if (n)
			sum(a, b);
		else
			sum(a1, b1);
		break;
	}
	case '-':
	{
		if (n)
			dif(a, b);
		else
			dif(a1, b1);
		break;
	}
	case '*':
	{
		if (n)
			prod(a, b);
		else
			prod(a1, b1);
		break;
	}
	case '/':
	{
		if (n)
			quot(a, b);
		else
			quot(a1, b1);
		break;
	}
	default:
		break;
	}

	system("pause");
	
}

void sum(int a, int b) {
	int d = a + b;
	cout << a << "+" << b << "=" << d << endl;
}
void sum(double a, double b) {
	double d = a + b;
	cout << a << "+" << b << "=" << d << endl;
}

void dif(int a, int b) {
	int d = a - b;
	cout << a << "-" << b << "=" << d << endl;
}
void dif(double a, double b) {
	double d = a - b;
	cout << a << "-" << b << "=" << d << endl;
}

void prod(int a, int b) {
	int d = a * b;
	cout << a << "*" << b << "=" << d << endl;
}
void prod(double a, double b) {
	double d = a * b;
	cout << a << "*" << b << "=" << d << endl;
}

void quot(int a, int b) {
	double d = a / b;
	cout << a << "/" << b << "=" << d << endl;
}
void quot(double a, double b) {
	double d = a / b;
	cout << a << "/" << b << "=" << d << endl;
}