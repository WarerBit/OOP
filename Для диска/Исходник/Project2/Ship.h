#pragma once
#include <vector>
#include "Pos.h"

using namespace std;

class Ship
{
protected:
	int heads;//���������� ����� �����
public:
	bool isDamaged;//������

	bool isAlive;//���

	vector<Pos> shipSurrounding;//����� � ��������� �������

	vector<Pos> posShip;//���������� ����� �������

	Ship();//������� ����� ������� ��� �����

	void setHeads(int);//������ ���������� �����

	void setPos(Pos,bool);//������ ���������� ������� � ��� ���������

	int getHeads();//�������� ���������� ���������� �����

	void Damage();//�������/����� �������

	~Ship();
};

