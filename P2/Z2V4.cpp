#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, x, y, t;
	cout << "Введите 2 числа:";//Ввод чисел
	cin >> a >> x;
	if (a <= x)//Проверка,вычисление y в соответсвии с результатом проверки 
		y = a + log(x+a);
	else
		y = sqrt(sin(a*x));
	if (a > y)//Проверка,вычисление t в соответсвии с результатом проверки 
		t = y/(a-x) ;
	else
		if (a == y)
			t = y/(a-x) +(a+x)/(y*y) ;
		else
			if (a < y)
				t = tan(a*x)+cos(2*a*y) ;
	cout << "a = " << a << "\nx = " << x << "\ny = " << y << "\nt = " << t;//Вывод результата


	return 0;
}
