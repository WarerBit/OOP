#include "Child.h"
#include<iostream>


Child::Child()
{
}

void Child::setVal(int val,int set) {
	age = set;
}

void Child::setVal(int val, string set) {
	if (val == NAME_CH)
		name = set;
	else
		surname = set;
}

void Child::getVal(int val) {
	if (val == AGE_CH)
		cout << "Age is " << age << endl;
	if (val == NAME_CH)
		cout << "Name is " << name << endl;
	if (val == SURNAME_CH)
		cout << "Surname is " << surname << endl;
}

Child::~Child()
{
}
