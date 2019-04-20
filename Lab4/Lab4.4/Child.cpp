#include "Child.h"
#include<iostream>


Child::Child()
{
}

Child::Child(int age,string name,string surname)
{
	this->age = age;
	this->name = name;
	this->surname = surname;
}

Child::Child(const Child& ch_obj)
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
