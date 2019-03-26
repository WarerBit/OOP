#include "pch.h"
#include <iostream>

using namespace std;

void bubSort(int *a);

void bubSort(double *a);

int main()
{
	int *a = new int[10];
	cout << "Vvedite 10 celih chisel:";
	for (int i=0; i < 10; i++)
		cin >> a[i];
	bubSort(a);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << a[i];
	delete[] a;

	double *b = new double[10];
	cout << "\nVvedite 10 drobnih chisel:";
	for (int i=0; i < 10; i++)
		cin >> b[i];
	bubSort(b);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << b[i];
	delete[] b;

}

void bubSort(int *a) {
	int k = 1; int n=9;
	while (k != 0) {
		k = 0;
		for (int i = 0; i < n; i++)
			if (a[i] <= a[i + 1]) {
				swap(a[i], a[i + 1]);
				k++;
			}
		if (k != 0)
			n--;
	}


}

void bubSort(double *a) {
	int k = 1; int n = 9;
	while (k != 0) {
		k = 0;
		for (int i = 0; i < n; i++)
			if (a[i] <= a[i + 1]) {
				swap(a[i], a[i + 1]);
				k++;
			}
		if (k != 0)
			n--;
	}
}