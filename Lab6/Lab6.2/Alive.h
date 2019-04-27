#pragma once
#include <iostream>
#include <string>

using namespace std;

class Alive
{
protected:
	int age;
	string spicies;
public:
	Alive(int age, string spicies) {
		this->age = age;
		this->spicies = spicies;
	}
	~Alive()
	{
	}
	int getAge() {
		return age;
	}
	string getSpicies() {
		return spicies;
	}
};

class Bird : public Alive {
private:
	bool flying;
public:
	Bird(int age, string spicies, bool flying) : Alive(age, spicies) {
		this->flying = flying;
	}
	string getFlyable() {
		if (flying)
			return "Can fly";
		else
			return "Can't fly";
	}
};

class Fish : public Alive {
private:
	string depth;
public:
	Fish(int age, string spicies, string depth) : Alive(age, spicies) {
		this->depth = depth;
	}
	string getDepth() {
		return depth;
	}
};

class Animal : public Alive {
private:
	int legs;
public:
	Animal(int age, string spicies, int legs) : Alive(age, spicies) {
		this->legs = legs;
	}
	int getLegs() {
		return legs;
	}
};