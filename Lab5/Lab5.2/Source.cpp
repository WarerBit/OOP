#include"Vector.h"

int main()
{
	Vector v1;
	cout << "Enter vector(x,y,z):";
	cin >> v1;
	Vector v2 = v1;
	cout << "\nThis is the second vector - ";
	cout << v2;
	cout << "\nCheck if v1 = v2:";
	if (v1 == v2)
		cout << "\nThere are 2 similar vectors.\n";
	system("pause");
}