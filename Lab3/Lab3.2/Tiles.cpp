#include "Tiles.h"



Tiles::Tiles(int size_h, int size_w, int price, string brand)
{
	this->price = price;
	this->size_h = size_h;
	this->size_w = size_w;
	this->brand = brand;
}

void Tiles::getData() {
	cout << brand << endl << "H - " << size_h << endl << "W - " << size_w << endl << "Price:" << price << endl << endl;
}

Tiles::~Tiles()
{
}
