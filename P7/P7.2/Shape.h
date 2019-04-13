#pragma once
#include<iostream>
using namespace std;

class Shape
{
protected:
	int side1;
	int side2;
public:
	Shape(int, int);
	virtual void S() = 0;
	void setSide1(int side){
		this->side1 = side;
	}
	void setSide2(int side) {
		this->side2 = side;
	}
	int getSide1() {
		return side1;
	}
	int getSide2() {
		return side2;
	}
};

class Quadra : public Shape {
public:
	Quadra(int side1, int side2) : Shape(side1,side2){}
	virtual void S() = 0;
};

class Rect : public Quadra {
public:
	Rect(int side1,int side2) : Quadra(side1,side2) {}
	void S() {
		cout << "S = a*b = " << side1 << "*" << side2 << " = " << side1 * side2 << endl;
	}
};

class Rhomb : public Quadra {
public:
	Rhomb(int side1,int side2) : Quadra(side1,side2){} 
	void S() {
		cout << "S = (a*b)/2 = " << "(" << side1 << "*" << side2 << ")/2 = " << (side1*side2) / 2 << endl;
	}
};
