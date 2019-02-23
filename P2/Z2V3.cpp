#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	float a,b,y,t;
     cout << "Введите 2 числа:";//Ввод чисел
     cin >> a >> b;
     if (a <= b)//Проверка,вычисление y в соответсвии с результатом проверки 
      y = ((a-b)*(a+b))/((a+b)*(a*a - a*b + b*b));
     else
      y = a + log(b*b);
     if (y == b)//Проверка,вычисление t в соответсвии с результатом проверки 
	  t = (2*y + sqrt(y*y - a))/(2*b - sqrt(a*a - y));
	  else
	 if (y < b)
	 t = sin(y)*sin(y) + 1/tan(a-b);
	 else
	 if (y > b)
	 t = cbrt(y*sin(a))+1/sqrt(y*cos(b));
	 cout << "a = " << a << "\nb = " << b << "\ny = " << y << "\nt = " << t;//Вывод результата
	
	
	return 0;
}
