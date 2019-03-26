
#include <iostream>
#include <ctime>

using namespace std;

void filArr(int *a);

void changeArr(int *a);

void displayArr(int *a);

void delArr(int *a);

int main()
{
	srand(time(NULL));

	int *a = new int[12];

	filArr(a);

	cout << "Nachalniy massiv:\n";
	displayArr(a);

	changeArr(a);

	cout << "\n\nKonechniy massiv:\n";
	displayArr(a);

	delArr(a);


	system("pause");
}

void changeArr(int *a) {
	for (int i = 0; i < 11; i += 2)
		swap(a[i], a[i + 1]);
}

void filArr(int *a) {
	for (int i = 0; i < 12; i++)
		a[i] = (rand() % 100);
}

void displayArr(int *a) {
	for (int i = 0; i < 12; i++)
		cout << "element #" << i + 1 << " = " << a[i] << endl;
}

void delArr(int *a) {
	delete[] a;
}