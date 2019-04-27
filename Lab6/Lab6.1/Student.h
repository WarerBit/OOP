#pragma once
#include <iostream>
#include<string>
#include<ctime>

using namespace std;

class Student
{
protected:
	int age;
	int number;
	string name;
public:
	Student(int age, int number, string name) {
		this->age = age;
		this->number = number;
		this->name = name;
	}
	~Student()
	{
	}
	int getAge() {
		return age;
	}
	int getNumber() {
		return number;
	}
	string getName() {
		return name;
	}
};

class Starosta : public Student {
private:
	string group;
	int missed;
public:
	Starosta(int age, int number, string name, string group, int missed) : Student(age, number, name) {
		this->group = group;
		this->missed = missed;
	}
	string getGroup() {
		return group;
	}
	int getMiss() {
		return missed;
	}
	void miss() {
		srand(time(NULL));
		int r = rand() % 4;
		cout << endl << name << " today have decided to miss " << r << " classes.";
		missed += r;
	}
	void check() {
		srand(time(NULL));
		int r = rand() % 30;
		cout << endl << r << " students have missed classes today.\n";
	}
};
