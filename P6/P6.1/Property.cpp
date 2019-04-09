#include <iostream>
#include "Property.h"

using namespace std;

int main()
{
	Property *a[7];
	for (int i = 0; i < 7; i++)
	{
		double worth;
		cout << "Vvedite stoimost':";
		cin >> worth;
		cout << "__________________________" << endl;
		if (i < 3)
			a[i] = new Appartment(worth);
		if (i < 5)
			a[i] = new Car(worth);
		else
			a[i] = new CountryHouse(worth);
	}
	cout << "Taxes:" << endl;
	for (int i = 0; i < 7; i++)
		cout << i + 1 << ". " << a[i]->tax() << endl;

	system("pause");
	delete[] a;
	return 0;
}