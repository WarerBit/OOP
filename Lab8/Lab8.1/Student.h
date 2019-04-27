#pragma once
#include <iostream>
#include<string>

using namespace std;

class Student
{
protected:
	int age;
	string name;
public:
	Student(int age, string name) {
		this->age = age;
		this->name = name;
	}
	~Student()
	{
	}
	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}
};