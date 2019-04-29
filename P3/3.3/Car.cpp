#include "Car.h"



Car::Car()
{
	model = "";
	color = "";
	seat = 0;
}

void Car::setCarValue(int name, string value) {
	if (name == C_MODEL)
		model = value;
	if (name == C_COLOR)
		color = value;
}

void Car::setCarValue(int name, int value) {
	if (name == C_SEAT)
		seat = value;
}

string Car::getCarValue(int name) {
	if (name == C_MODEL)
		return model;
	if (name == C_COLOR)
		return color;
}

int Car::getCarSeat() {
	return seat;
}


Car::~Car()
{
}
