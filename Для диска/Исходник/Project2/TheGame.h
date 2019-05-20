#pragma once
#include "Player.h"
#include <SFML/Graphics.hpp>
#include<cmath>
#include<ctime>

using namespace std;
using namespace sf;

class TheGame
{
protected:
	Player player;//�����-������������
	Player playerCPU;//�����-���������
	vector<FloatRect> cpuShips;//������� ����������
	vector<Sprite> ships;//������� ������������
	Sprite plain1;//���� ������������
	Sprite plain2;//���� ����������
	Texture markText;//�������� "�������� ��������"
	Texture shipText;//������� �������
	Texture Text;//�������� ��������
	Texture TextInformation;//�������� �������� ��������� ����������
	Image markImg;//����������� "�������� ��������"
	vector<bool> canRotate;//����� �� ��������� n-�� ������� ������������
	vector<bool> isRotated;//�������� �� n-�� �������
public:
	TheGame();

	bool restart;//������ ������
	bool win;//������ ��� ���������
	bool goOn;//����������

	void Texturising();//������� �������� ��������

	void StageOne();//������ ����: ����������� ��������

	void StageTwo();//������ ����: ������ ��������� �������� � ������������ � ���, ��� ��������� ������� ������������. ����������� �������� ���������� � ������ �� ���������.

	void StageThree();//������ ����: ���� ����

	void StageFinal();//��������� ����: ���� � ����������� � ������� "Restart"


	~TheGame();
};

