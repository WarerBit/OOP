#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	float a,b,z,t;
     cout << "������� 2 �����:"; //���� �����
     cin >> a >> b;
     if (a < b) //��������,���������� z � ����������� � ����������� �������� 
      z = sqrt(abs(a*a - b*b));
     else
      z = 1 - 2*cos(a)*sin(b);
     if (z < b)//��������,���������� t � ����������� � ����������� �������� 
	  t = pow((z+a*a*b),1/3.0);
	  else
	 if (z == b)
	 t = 1 - log10(z) + cos(a*a*b);
	 else
	 if (z > b)
	 t =1/cos(z*a);
	 cout << "a = " << a << "\nb = " << b << "\nz = " << z << "\nt = " << t; // ����� ����������
	
	
	return 0;
}
