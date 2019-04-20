#include<iostream>

int sum(int x1, int x2, int x3);
int dif(int x1, int x2, int x3);
int sumdif(int x1, int x2, int x3);

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 3 numbers:";
	cin >> a >> b >> c;
	if (a < b + c)
		cout << "Result =" << sum(a, b, c) << endl;
	else
		if (a > b + c)
			cout << "Result =" << dif(a, b, c) << endl;
		else
			cout << "Result =" << sumdif(a, b, c) << endl;

	system("pause");

}

int sum(int x1, int x2, int x3) {
	return(x1 + x2 + x3);
}
int dif(int x1, int x2, int x3) {
	return(x1 - x2 - x3);
}
int sumdif(int x1, int x2, int x3) {
	return(x1 + x2 - x3);
}