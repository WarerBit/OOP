#pragma once
#include <string>
#define C_MODEL 0
#define C_SEAT 1
#define C_COLOR 2

using namespace std;
class Car
{
	string model;
	int seat;
	string color;
public:
	Car();

	void setCarValue(int name, string value);

	void setCarValue(int name, int value);

	string getCarValue(int name);

	int getCarSeat();

	~Car();
};

