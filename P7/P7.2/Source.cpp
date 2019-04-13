#include "Shape.h"

int main()
{
	int a, b;
	cout << "Rectangle:\nEnter length and width:";
	cin >> a >> b;
	Rect rect(a, b);
	cout << "length = " << rect.getSide1() << "\nwidth = " << rect.getSide2() << endl;
	rect.S();

	cout << "Rhomb:\nEnter 2 diagonals:";
	cin >> a >> b;
	Rhomb rhomb(a, b);
	cout << "1st diagonal = " << rhomb.getSide1() << "\n2nd diagonal = " << rhomb.getSide2() << endl;
	rhomb.S();

	system("pause");

}