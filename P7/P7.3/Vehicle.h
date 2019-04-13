#pragma once
#include<string>
#include<iostream>

using namespace std;

class Vehicle
{
protected:
	int wheels;
	int seats;
	string color;
public:
	Vehicle(int,int,string);
	virtual void speed() = 0;
	void setWheels(int wheels) {
		this->wheels = wheels;
	}
	void setSeats(int seats) {
		this->seats = seats;
	}
	void setColor(string color) {
		this->color = color;
	}
	int getWheels() {
		return wheels;
	}
	int getSeats() {
		return seats;
	}
	string getColor() {
		return color;
	}
};

class Bike : public Vehicle{
public:
	Bike(int wheels,int seats,string color): Vehicle(wheels,seats,color){}
	void speed() {
		cout << "Bike is faster then legs.\n";
	}
};

class Automobile : public Vehicle {
public:
	Automobile(int wheels, int seats, string color) : Vehicle(wheels, seats, color) {}
	void speed() {
		cout << "Automobile is faster then bike or bus.\n";
	}
};

class Bus : public Vehicle {
public:
	Bus(int wheels, int seats, string color) : Vehicle(wheels, seats, color) {}
	void speed() {
		cout << "Bus is faster then bike.\n";
	}
};