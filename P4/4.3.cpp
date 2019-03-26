
#include <iostream>
#include <ctime>

using namespace std;

void filArr(int **a,int i,int j);


void displayArr(int **a,int i,int j);

void delArr(int **a,int i);

int main()
{
	srand(time(NULL));
	int i, j;
	cout << "Vvedite kol-vo strok i stolbcov:";
	cin >> i >> j;
	int **a = new int*[i];
	for (int k = 0; k < i; k++)
		a[k] = new int[j];

	filArr(a, i, j);

	displayArr(a, i, j);

	delArr(a,i);

	system("pause");
}


void filArr(int **a,int i,int j) {
	for (int k = 0; k < i ; k++)
		for (int t = 0; t < j; t++)
		a[k][t] = (rand() % 40) + 10;
}

void displayArr(int **a,int i,int j) {
	for (int k = 0; k < i; k++) {
		cout << endl;
		for (int t = 0; t < j; t++)
			cout << a[k][t] << " ";
	}
}

void delArr(int **a,int i) {
	for (int k = 0; k < i; k++)
		delete[] a[k];
	delete a;
}