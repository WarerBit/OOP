#pragma once
#include<vector>
#include "Ship.h"
#include <iostream>
using namespace std;

class Player
{
protected:
	int numberOfShips;//���������� ���������� ��������
public:
	vector<Ship> pships;//�������

	bool turn;// ���

	Player();//������� ������ � 10 ���������

	void setShip(Pos,int,bool);//������ ���������� �������

	void killShip();//����� �������

	int getNumberOfShips();//�������� ���������� ���������� ��������


	~Player();
};

