#pragma once
#include <vector>
#include "Pos.h"

using namespace std;

class Ship
{
protected:
	int heads;//Количество целых палуб
public:
	bool isDamaged;//Подбит

	bool isAlive;//Жив

	vector<Pos> shipSurrounding;//Точки в окружении корабля

	vector<Pos> posShip;//Координаты палуб корабля

	Ship();//Создает живой корабль без палуб

	void setHeads(int);//Задать количество палуб

	void setPos(Pos,bool);//Задать координаты корабля и его окружения

	int getHeads();//Получить количество оставшихся палуб

	void Damage();//Подбить/убить корабль

	~Ship();
};

