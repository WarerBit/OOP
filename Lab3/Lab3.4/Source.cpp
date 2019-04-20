#include "Vector.h"

int main()
{
	Vector v1(1, 2, 3), v2(4, 5, 6),v3;

	cout << "Vector1:";
	v1.getModule();
	cout << "Vector2:";
	v2.getModule();
	v3 = v1 + v2;
	cout << "Vector1 + Vector2 = ";
	v3.getVec();
	v3 = v1 - v2;
	cout << "Vector1 - Vector2 = ";
	v3.getVec();

	system("pause");
}