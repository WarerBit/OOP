#include "Player.h"



Player::Player()
{
	turn = false;
	numberOfShips = 10;
}


void Player::setShip(Pos mainPos,int number,bool isRotated) {
	Ship ship;
	if (number < 4) {
		ship.setHeads(1);
		ship.setPos(mainPos, isRotated);
	}
	else
		if (number < 7) {
			ship.setHeads(2);
			ship.setPos(mainPos, isRotated);
		}
		else
			if (number < 9) {
				ship.setHeads(3);
				ship.setPos(mainPos, isRotated);
			}
			else {
				ship.setHeads(4);
				ship.setPos(mainPos, isRotated);
			}
	pships.push_back(ship);
	
}


void Player::killShip() {
	numberOfShips--;
}

int Player::getNumberOfShips() {
	return numberOfShips;
}

Player::~Player()
{
}
