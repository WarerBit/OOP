#pragma once
#include<string>
#include<iostream>

using namespace std;

class Human
{
protected:
	string name;
	string surname;
	string midname;
	int age;
public:
	Human(){}
	Human(string name, string surname, string midname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->midname = midname;
		this->age = age;
	}
	~Human(){}
	virtual void print() = 0;
};

class Student : public Human {
private:
	bool on_lesson;
public:
	Student(string name, string surname, string midname, int age, bool on_lesson) : Human(name,surname, midname,age) {
		this->on_lesson = on_lesson;
	}
	void print() {
		cout << "Name: " << surname << " " << name << " " << midname << "\nAge - " << age;
		if (on_lesson)
			cout << "\nThe student is on the lesson.\n";
		else
			cout << "\nThe student isn't on the lesson.\n";
	}
};

class Boss : public Human {
private:
	int number_of_workers;
public:
	Boss(string name, string surname, string midname, int age, int number_of_workers) : Human(name, surname, midname, age) {
		this->number_of_workers = number_of_workers;
	}
	void print() {
		cout << "Name: " << surname << " " << name << " " << midname << "\nAge - " << age << "\nNumber of workers - " << number_of_workers << endl;
	}
};