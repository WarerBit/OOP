#include "pch.h"
#include <iostream>

using namespace std;

void choSort(int *a);

void choSort(double *a);

int main()
{
	int *a = new int[10];
	cout << "Vvedite 10 celih chisel:";
	for (int i=0; i < 10; i++)
		cin >> a[i];
	choSort(a);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << a[i];
	delete[] a;

	double *b = new double[10];
	cout << "\nVvedite 10 drobnih chisel:";
	for (int i=0; i < 10; i++)
		cin >> b[i];
	choSort(b);
	cout << "\nOtsortirovanniy massiv:";
	for (int i = 0; i < 10; i++)
		cout << " " << b[i];
	delete[] b;

}

void choSort(int *a) {
	int n = 9; int max;
	while (n -1 != 0) {
		max = 0;
		for (int i = 0; i < n; i++)
			if (a[max] <= a[i])
				max = i;
		swap(a[max], a[n]);
		n--;
	}


}

void choSort(double *a) {
	int n = 9; int max;
	while (n-1 != 0){
		max = 0;
	for (int i = 0; i < n; i++)
		if (a[max] <= a[i])
			max = i;
	swap(a[max], a[n]);
	n--;
	}
}