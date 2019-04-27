#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
	int age;
	int legs;
	string color;
public:
	Animal(int age, int legs, string color) {
		this->age = age;
		this->legs = legs;
		this->color = color;
	}
	virtual void sound() = 0;
	void setLegs(int legs) {
		this->legs = legs;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setColor(string color) {
		this->color = color;
	}
	int getLegs() {
		return legs;
	}
	int getAge() {
		return age;
	}
	string getColor() {
		return color;
	}
};

class Cat : public Animal {
public:
	Cat(int age, int legs, string color) : Animal(age, legs, color) {}
	void sound() {
		cout << "Nya~" << endl;
	}
};

class Dog : public Animal {
public:
	Dog(int age, int legs, string color) : Animal(age, legs, color) {}
	void sound() {
		cout << "Woof" << endl;
	}
};