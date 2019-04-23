#include"Complex.h"

int main()
{
	Complex c;
	cout << "Enter complex(x+yi): ";
	cin >> c;
	Complex c2 = c;
	c++;
	cout << "\nFirst complex after ++: ";
	cout << c;
	c2--;
	cout << "\nSecond complex after --: ";
	cout << c2;
	if (c == c2)
		cout << "\nFirst complex = second complex\n";
	else
		cout << "\nFirst complex != second complex\n";

	system("pause");
}