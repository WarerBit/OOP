#include"Child.h"
#include<iostream>

using namespace std;
int main()
{
	Child son, daughter;
	son.setVal(AGE_CH, 12);
	son.setVal(NAME_CH, "Tolik");
	son.setVal(SURNAME_CH, "Ivanov");
	cout << "Son:\n";
	son.getVal(AGE_CH);
	son.getVal(NAME_CH);
	son.getVal(SURNAME_CH);
	daughter.setVal(AGE_CH, 8);
	daughter.setVal(NAME_CH, "Masha");
	daughter.setVal(SURNAME_CH, "Ivanova");
	cout << "\nDaughter:\n";
	daughter.getVal(AGE_CH);
	daughter.getVal(NAME_CH);
	daughter.getVal(SURNAME_CH);

	system("pause");
}