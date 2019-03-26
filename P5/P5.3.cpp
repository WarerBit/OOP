#include "pch.h"
#include <iostream>

using namespace std;

void insSort(int *a);

void insSort(double *a);

int main()
{
	int *a = new int[10];
	cout << "Vvedite 10 celih chisel:";
	for (int i=0; i < 10; i++)
		cin >> a[i];
	insSort(a);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << a[i];
	delete[] a;

	double *b = new double[10];
	cout << "\nVvedite 10 drobnih chisel:";
	for (int i=0; i < 10; i++)
		cin >> b[i];
	insSort(b);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << b[i];
	delete[] b;

}

void insSort(int *a) {
	for (int i = 0; i < 10; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
	}


void insSort(double *a) {
	for (int i = 0; i < 10; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
	}
