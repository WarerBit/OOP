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
	Player player;//Игрок-пользователь
	Player playerCPU;//Игрок-компьютер
	vector<FloatRect> cpuShips;//Корабли компьютера
	vector<Sprite> ships;//Корабли пользователя
	Sprite plain1;//Поле пользователя
	Sprite plain2;//Поле компьютера
	Texture markText;//Текстура "красного крестика"
	Texture shipText;//Тектура корабля
	Texture Text;//Основная текстура
	Texture TextInformation;//Основная текстура текстовой информации
	Image markImg;//Изображение "красного крестика"
	vector<bool> canRotate;//Можно ли повернуть n-ый корабль пользователя
	vector<bool> isRotated;//Повернут ли n-ый корабль
public:
	TheGame();

	bool restart;//Играть заново
	bool win;//Победа или поражение
	bool goOn;//Продолжить

	void Texturising();//Создает основные текстуры

	void StageOne();//Первый этап: расстановка кораблей

	void StageTwo();//Второй этап: запись координат кораблей в соответствии с тем, как расставил корабли пользователь. Расстановка кораблей компьютера и запись их координат.

	void StageThree();//Третий этап: сама игра

	void StageFinal();//Последний этап: окно с результатом и кнопкой "Restart"


	~TheGame();
};

