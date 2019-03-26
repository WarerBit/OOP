
#include <iostream>
#include <ctime>

using namespace std;

double *cMem(int n);

void filArr(double *a, int n);

void displayArr(double *a, int n);

void delArr(double *a);

int main()
{
	srand(time(NULL));
	int n;
	cout << "Vvedite razmer massiva:";
	cin >> n;
	double *a;

	a = cMem(n);

	filArr(a, n);

	displayArr(a, n);

	delArr(a);


	system("pause");
}

double *cMem(int n) {
	double *a = new double[n];
	return a;
}

void filArr(double *a, int n) {
	for (int i = 0; i < n; i++)
		a[i] = (rand() % 1000) / 7.0;
}

void displayArr(double *a, int n) {
	for (int i = 0; i < n; i++)
		cout << "element #" << i + 1 << " = " << a[i] << endl;
}

void delArr(double *a) {
	delete[] a;
}