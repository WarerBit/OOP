#pragma once
#include<vector>
#include "Ship.h"
#include <iostream>
using namespace std;

class Player
{
protected:
	int numberOfShips;//Количество оставшихся кораблей
public:
	vector<Ship> pships;//Корабли

	bool turn;// Ход

	Player();//Создает игрока с 10 кораблями

	void setShip(Pos,int,bool);//Задать координаты корабля

	void killShip();//Убить корабль

	int getNumberOfShips();//Получить количество оставшихся кораблей


	~Player();
};

