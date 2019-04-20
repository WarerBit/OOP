#include<iostream>
#include<ctime>

void invert(int *arr, int size);

void sortInc(int *arr, int size);

void sortDec(int *arr, int size);

void (*fun(int *arr,int size))(int *arr, int size);

using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	cout << "Enter size:";
	cin >> n;
	int *a = new int[n];
	cout << "It's an array: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	
	fun(a, n)(a, n);

	cout << "\nAnd it's an array after some magic: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
}

void invert(int *arr, int size) {
	for (int i = 0; i < size / 2; i++)
		swap(arr[i], arr[size - i - 1]);
}

void sortInc(int *arr, int size) {
	for (int i = 0; i < size-1; i++)
		for (int j = 0; j < size - i -1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void sortDec(int *arr, int size) {
	for (int i = 0; i < size-1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void(*fun(int *arr, int size))(int *arr, int size) {
	int sum =0;
	for (int i = 1; i < size; i++)
		sum += arr[i];
	if (sum == arr[1])
		return invert;
	if (sum > arr[1])
		return sortInc;
	if (sum < arr[1])
		return sortDec;
}