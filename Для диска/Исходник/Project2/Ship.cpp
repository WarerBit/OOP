#include "Ship.h"




Ship::Ship()
{
	isDamaged = false;
	isAlive = true;
}

void Ship::Damage() {
	isDamaged = true;
	heads--;
	if (heads == 0)
		isAlive = false;
}

void Ship::setHeads(int heads) {
	this->heads = heads;
}

void Ship::setPos(Pos posMain,bool direct) {
	if (direct)
		for (int i = -1; i != heads + 1; i++)
			if ((i != -1) && (i != heads)) {
				posShip.push_back(Pos(posMain.x + i, posMain.y));
				shipSurrounding.push_back(Pos(posMain.x + i, posMain.y + 1));
				shipSurrounding.push_back(Pos(posMain.x + i, posMain.y - 1));
			}
			else {
				shipSurrounding.push_back(Pos(posMain.x + i, posMain.y));
				shipSurrounding.push_back(Pos(posMain.x + i, posMain.y + 1));
				shipSurrounding.push_back(Pos(posMain.x + i, posMain.y - 1));
			}
	else
		for (int i = -1; i != heads + 1 ; i++)
			if ((i != -1) && (i != heads)) {
				posShip.push_back(Pos(posMain.x, posMain.y + i));
				shipSurrounding.push_back(Pos(posMain.x + 1, posMain.y + i));
				shipSurrounding.push_back(Pos(posMain.x - 1, posMain.y + i));
			}
			else {
				shipSurrounding.push_back(Pos(posMain.x , posMain.y + i));
				shipSurrounding.push_back(Pos(posMain.x + 1, posMain.y + i));
				shipSurrounding.push_back(Pos(posMain.x - 1, posMain.y + i));
			}


}


int Ship::getHeads() {
	return heads;
}


Ship::~Ship()
{
}
