#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float a, b; //Числа с плавающей точкой
	string znak; //Строковая переменная
	cout << "Enter first number:"; //Ввод примера
	cin >> a;
	cout << "Enter operation(+ , -):";
	cin >> znak;
	cout << "Enter second number:";
	cin >> b;
	cout << "Result:"; //Результат вычислений
	if (znak == "+")
		cout << a + b;
	if (znak == "-")
		cout << a - b;

	system("pause");
}
