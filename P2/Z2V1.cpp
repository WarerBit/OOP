#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	float a,b,n,m;
     cout << "Введите 2 числа:"; //Ввод чисел
     cin >> a >> b;
     if (a >= b) //Проверка,вычисление n в соответсвии с результатом проверки 
      n = pow((a - b),1/3.0);
     else
      n = a*a +(a-b)/(sin(a*b));
     if (n < b) //Проверка,вычисление m в соответсвии с результатом проверки 
	  m = (n+a)/(-b)+sqrt(sin(a)*sin(a) - cos(n));
	  else
	 if (n == b)
	 m = b*b + tan(n*a);
	 else
	 if (n > b)
	 m = b*b*b + n*a*a;
	 cout << "a = " << a << "\nb = " << b << "\nn = " << n << "\nm = " << m;//Вывод результата  
	
	
	return 0;
}
