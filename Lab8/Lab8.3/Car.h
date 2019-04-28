#pragma once
#include<string>
#include<iostream>

using namespace std;
class Car
{
private:
	string color;
	string model;
public:
	Car(string color, string model)
	{
		this->color = color;
		this->model = model;
	}
	~Car()
	{}
	void getCar() {
		cout << "Color - " << color << "\nModel - " << model << endl;
	}
};

