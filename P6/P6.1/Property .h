#pragma once
class Property
{
protected:
	double worth;
public:
	Property(double worth) {
		this->worth = worth;
	}
	virtual double tax() = 0;

	virtual ~Property() {}
};

class Appartment :public Property
{
public:
	Appartment(double worth) : Property(worth) {};
	double tax() {
		return worth / 1000;
	}
};

class Car :public Property
{
public:
	Car(double worth) : Property(worth) {};
	double tax() {
		return worth / 200;
	}
};

class CountryHouse :public Property
{
public:
	CountryHouse(double worth) : Property(worth) {};
	double tax() {
		return worth / 500;
	}
};

