#include<iostream>

int sum(int x1, int x2, int x3);
int dif(int x1, int x2, int x3);
int sumdif(int x1, int x2, int x3);
int (*fun)(int x1,int x2,int x3);

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 3 numbers:";
	cin >> a >> b >> c;
	if (a < b + c)
		fun = sum;
	else
		if (a > b + c)
			fun = dif;
		else
			fun =sumdif;

cout << "Result: " << fun(a,b,c) << endl;
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
