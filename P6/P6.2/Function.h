#pragma once
#include <iostream>
#include <cmath>

using namespace std;
class Function
{
public:
	virtual void printF() = 0;
	virtual double count(double x) = 0;
	virtual void takeP() = 0;
};

class Const : public Function {
	double x;
public:
	Const(double x) { this->x = x; }
	void printF() {
		cout << "f(x) = " << x << endl;
	}
	double count(double y) {
		return x;
	}
	void takeP() {
		cout << "f'(x) = 0" << endl;
	}
};


class Argument : public Function {
public:
	void printF() {
		cout << "f(x) = x" << endl;
	}
	double count(double x) {
		return x;
	}
	void takeP() {
		cout << "f'(x) = 1" << endl;
	}
};

class Sum : public Function {
	double x1;
public:
	Sum(double x1) { this->x1 = x1; }
	void printF() {
		cout << "f(x) = x + y" << endl;
	}
	double count(double x) {
		return x + x1;
	}
	void takeP() {
		cout << "f'(x) = 1" << endl;
	}
};

class Dif : public Function {
	double x1;
public:
	Dif(double x1) { this->x1 = x1; }
	void printF() {
		cout << "f(x) = x - y" << endl;
	}
	double count(double x) {
		return x - x1;
	}
	void takeP() {
		cout << "f'(x) = 1 " << endl;
	}
};

class Prod : public Function {
	double x1;
public:
	Prod(double x1) { this->x1 = x1; }
	void printF() {
		cout << "f(x) = x * y" << endl;
	}
	double count(double x) {
		return x * x1;
	}
	void takeP() {
		cout << "f'(x) = y " << endl;
	}
};

class Quot : public Function {
	double x1;
public:
	Quot(double x1) { this->x1 = x1; }
	void printF() {
		cout << "f(x) = x/y" << endl;
	}
	double count(double x) {
		return x / x1;
	}
	void takeP() {
		cout << "f'(x) = 1/y" << endl;
	}
};

class Sin : public Function {
public:
	void printF() {
		cout << "f(x) = sin(x)" << endl;
	}
	double count(double x) {
		return sin(x);
	}
	void takeP() {
		cout << "f'(x) = cos(x)" << endl;
	}
};

class Cos : public Function {
public:
	void printF() {
		cout << "f(x) = cos(x)" << endl;
	}
	double count(double x) {
		return cos(x);
	}
	void takeP() {
		cout << "f'(x) = -sin(x)" << endl;
	}
};

class Exp : public Function {
public:
	void printF() {
		cout << "f(x) = e^x" << endl;
	}
	double count(double x) {
		return exp(x);
	}
	void takeP() {
		cout << "f'(x) = e^x" << endl;
	}
};

class Ln : public Function {
public:
	void printF() {
		cout << "f(x) = ln(x)" << endl;
	}
	double count(double x) {
		return log(x);
	}
	void takeP() {
		cout << "f'(x) = 1/x" << endl;
	}
};