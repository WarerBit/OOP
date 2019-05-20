#include "TheGame.h"



TheGame::TheGame()
{
	Text.loadFromFile("image/Text.png");
	shipText.loadFromFile("image/Text.png", IntRect(301, 0, 30, 30));
	shipText.setRepeated(true);
	markImg.loadFromFile("image/Text.png");
	markImg.createMaskFromColor(Color::Color(0,96,177));
	markText.loadFromImage(markImg);
	TextInformation.loadFromFile("image/TextInf.png");
	goOn = false;
	win = false;
	restart = false;
	for (int i = 0; i < 7; i++) {
		isRotated.push_back(false);
		canRotate.push_back(true);
	}
}

void TheGame::StageOne(){/////////////////////////////////////////////////////////////////////////////////////////////Этап 1 - расстановка кораблей

	int lastShip = -1;
	bool isMove = false;
	float dX = 0, dY = 0;
	int k = -1;
	bool shipsLocked = false;
	Sprite startButton;
	startButton.setTexture(Text);
	startButton.setTextureRect(IntRect(301, 61, 60, 30));
	startButton.setPosition(100, 100);
	////////////////////////////////////////////////////////////////////////////////////////////////Начальное окно,где игрок расставляет корабли
	sf::RenderWindow startWin(sf::VideoMode(1000, 800), "The start!", sf::Style::Close);
	startWin.setFramerateLimit(100);
	while (startWin.isOpen())
	{
		Vector2i pixelPos = Mouse::getPosition(startWin);//забираем коорд курсора

		sf::Event sEvent;
		while (startWin.pollEvent(sEvent))
		{
			if (sEvent.type == sf::Event::Closed)
				startWin.close();
			if (sEvent.type == Event::MouseButtonPressed)
				if (sEvent.key.code == Mouse::Left) {
					if (shipsLocked)
						if (startButton.getGlobalBounds().contains(pixelPos.x, pixelPos.y)) {
							goOn = true;
							startWin.close();
						}
					/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Перетаскивание кораблей и постановка их на поле
					for (int i = 0; i < ships.size(); i++)
						if (ships[i].getGlobalBounds().contains(pixelPos.x, pixelPos.y))//и при этом координата курсора попадает в спрайт
						{
							k = i;
							lastShip = i;
							dX = pixelPos.x - ships[i].getPosition().x;//делаем разность между позицией курсора и спрайта для корректировки нажатия
							dY = pixelPos.y - ships[i].getPosition().y;
							isMove = true;//можем двигать спрайт							
						}
				}
			if (sEvent.type == Event::MouseButtonReleased)
				if (sEvent.key.code == Mouse::Left)
					for (int i = 0; i < ships.size(); i++)
						if (ships[i].getGlobalBounds().contains(pixelPos.x, pixelPos.y))
						{
							if ((pixelPos.x > 100) && (pixelPos.x < 400) && (pixelPos.y > 200) && (pixelPos.y < 500))
							{
								ships[i].setPosition((int(abs((ships[i].getPosition().x - 100) / 30))) * 30 + 100, (int(abs((ships[i].getPosition().y - 200) / 30))) * 30 + 200);
								if (i > 3)
									if (i < 7) {
										if (!isRotated[i - 3]) {
											if (int(abs((ships[i].getPosition().y - 200) / 30)) > 8)
												ships[i].setPosition(600 + (i - 4) * 70, 240);
												canRotate[i - 3] = true;

										}
										else {
											if (int(abs((ships[i].getPosition().x - 100) / 30)) > 8) {
												ships[i].setPosition(600 + (i - 4) * 70, 240);
												ships[i].rotate(-90);
												canRotate[i - 3] = true;
												isRotated[i - 3] = false;
												ships[i].setOrigin(Vector2f(0, 0));
											}

										}
										if ((int(abs((ships[i].getPosition().y - 200) / 30)) > 8) || (int(abs((ships[i].getPosition().x - 100) / 30)) > 8))
											canRotate[i - 3] = false;
										else
											canRotate[i - 3] = true;
									}
									else
										if (i < 9) {
											if (!isRotated[i - 3])
												if (int(abs((ships[i].getPosition().y - 200) / 30)) > 7) {
													ships[i].setPosition(600 + (i - 7) * 100, 320);
													canRotate[i - 3] = true;
												}
												else {}
											else
												if (int(abs((ships[i].getPosition().x - 100) / 30)) > 7) {
													ships[i].setPosition(600 + (i - 7) * 100, 320);
													ships[i].rotate(-90);
													canRotate[i - 3] = true;
													isRotated[i - 3] = false;
													ships[i].setOrigin(Vector2f(0, 0));

												}
												else {}
											if ((int(abs((ships[i].getPosition().y - 200) / 30)) > 7) || (int(abs((ships[i].getPosition().x - 100) / 30)) > 7))
												canRotate[i - 3] = false;
											else
												canRotate[i - 3] = true;
										}
										else {
											if (!isRotated[i - 3])
												if (int(abs((ships[i].getPosition().y - 200) / 30)) > 6) {
													ships[i].setPosition(600 , 420);
													canRotate[i - 3] = true;
												}
												else {}
											else
												if (int(abs((ships[i].getPosition().x - 100) / 30)) > 6) {
													ships[i].setPosition(600 , 420);
													ships[i].rotate(-90);
													canRotate[i - 3] = true;
													isRotated[i - 3] = false;
													ships[i].setOrigin(Vector2f(0, 0));

												}
											if ((int(abs((ships[i].getPosition().y - 200) / 30)) > 6) || (int(abs((ships[i].getPosition().x - 100) / 30)) > 6))
												canRotate[i - 3] = false;
											else
												canRotate[i - 3] = true;
										}
							}
							else {
								if (i < 4)
									ships[i].setPosition(600 + i * 40, 200);
								else
									if (i < 7)
										ships[i].setPosition(600 + (i - 4) * 70, 240);

									else
										if (i < 9)
											ships[i].setPosition(600 + (i - 7) * 100, 320);
										else
											ships[i].setPosition(600 , 420);
								if (i > 3)
									if (isRotated[i - 3]) {
										ships[i].rotate(-90);
										canRotate[i - 3] = true;
										isRotated[i - 3] = false;
										ships[i].setOrigin(Vector2f(0, 0));
									}
									else
										canRotate[i - 3] = true;
							}
							//////////////////////////////////////////////////////////////////////////////////////////////////////////////Проверка на правильность постановки кораблей
							for (int j = 0; j < 10; j++)
							{
								if (plain1.getGlobalBounds().contains(ships[lastShip].getPosition())){
									FloatRect lastbox = ships[lastShip].getGlobalBounds();
								FloatRect box = ships[j].getGlobalBounds();
								box.top -= 30; box.left -= 30;
								box.width += 60; box.height += 60;

								if (j != lastShip)
									if (lastbox.intersects(box)) {
										if (lastShip < 4) {
											ships[lastShip].setPosition(600 + lastShip * 40, 200);
											canRotate[lastShip - 3] = true;
										}
										else
											if (lastShip < 7) {
												ships[lastShip].setPosition(600 + (lastShip - 4) * 70, 240);
												canRotate[lastShip - 3] = true;
											}

											else
												if (lastShip < 9) {
													ships[lastShip].setPosition(600 + (lastShip - 7) * 100, 320);
													canRotate[lastShip - 3] = true;
												}
												else {
													ships[lastShip].setPosition(600, 420);
												}

										if (lastShip > 3)
											if (isRotated[lastShip - 3]) {
												ships[lastShip].rotate(-90);
												canRotate[lastShip - 3] = true;
												isRotated[lastShip - 3] = false;
												ships[lastShip].setOrigin(Vector2f(0, 0));
											}
									}
								}
								}
							//////////////////////////////////////////////////////////////////////////////////////////////////////////////Конец проверка
							isMove = false; //не можем двигать спрайт
							k = -1;
						}
			for (int i = 0; i < ships.size(); i++)
				ships[i].setColor(Color::White);
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////Конец перетаскивания кораблей

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////Поворот корабля
			if(isMove == false)
			if (sEvent.type == Event::MouseButtonPressed)
				if ((sEvent.key.code == Mouse::Right)&&(sEvent.key.code != Mouse::Left))
						for (int i = 4; i < ships.size(); i++)
							if (ships[i].getGlobalBounds().contains(pixelPos.x, pixelPos.y))
							{
								lastShip = i;
								if (canRotate[i - 3])
									if (!isRotated[i - 3]) {
										ships[i].rotate(90);
										isRotated[i - 3] = true;
										if (i < 7)
											ships[i].setOrigin(Vector2f(0, 60));
										else
											if (i < 9)
												ships[i].setOrigin(Vector2f(0, 90));
											else
												ships[i].setOrigin(Vector2f(0, 120));
									}
									else {
										ships[i].rotate(-90);
										isRotated[i - 3] = false;
										ships[i].setOrigin(Vector2f(0, 0));
									}
								//////////////////////////////////////////////////////////////////////////////////////////////////////////////Проверка на правильность постановки кораблей
								for (int j = 0; j < 10; j++)
								{
									if (plain1.getGlobalBounds().contains(ships[lastShip].getPosition())) {
										FloatRect lastbox = ships[lastShip].getGlobalBounds();
									FloatRect box = ships[j].getGlobalBounds();
									box.top -= 30; box.left -= 30;
									box.width += 60; box.height += 60;
									if (j != lastShip)
										if (lastbox.intersects(box)) {
											if (lastShip < 4) {
												ships[lastShip].setPosition(600 + lastShip * 40, 200);
												canRotate[lastShip - 3] = true;
											}
											else
												if (lastShip < 7) {
													ships[lastShip].setPosition(600 + (lastShip - 4) * 70, 240);
													canRotate[lastShip - 3] = true;
												}

												else
													if (lastShip < 9) {
														ships[lastShip].setPosition(600 + (lastShip - 7) * 100, 320);
														canRotate[lastShip - 3] = true;
													}
													else {
														ships[lastShip].setPosition(600, 420);
														canRotate[lastShip - 3] = true;
													}
											if (lastShip > 3)
												if (isRotated[lastShip - 3]) {
													ships[lastShip].rotate(-90);
													canRotate[lastShip - 3] = true;
													isRotated[lastShip - 3] = false;
													ships[lastShip].setOrigin(Vector2f(0, 0));
												}
										}
									}
									}
								//////////////////////////////////////////////////////////////////////////////////////////////////////////////Конец проверка
							}
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////Конец поворота корабля
			/////////////////////////////////////////////Проверка,стоят ли все корабли на поле
			shipsLocked = true;
			for (int i = 0; i < ships.size(); i++)
				if (!plain1.getGlobalBounds().contains(ships[i].getPosition()))
				shipsLocked = false;
			///////////////////////////////////////////////Конец проверки
		}
	




		startWin.clear(sf::Color::Color(169, 169, 169));
		startWin.draw(plain1);
		if (isMove) {
			ships[k].setColor(Color::Green);//красим спрайт в зеленый 
			ships[k].setPosition(pixelPos.x - dX, pixelPos.y - dY);
		}
		for (int i = 0; i < ships.size(); i++)
			startWin.draw(ships[i]);
		startWin.draw(startButton);

		startWin.display();


	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////Конец начального окна
}


void TheGame::StageTwo() {
	vector<FloatRect> cpuShipsBox;
	vector<Pos> CpuPos;
	vector<bool> CpuRotation;
	srand(time(NULL));
	int k = 0;
	for (int i = 0; i < 10; i++) {
		if (i > 3)
			player.setShip(Pos((int(abs(ships[i].getPosition().x - 100))) / 30, (int(abs((ships[i].getPosition().y - 200))) / 30)), i, isRotated[i - 3]);
		else
			player.setShip(Pos((int(abs(ships[i].getPosition().x - 100))) / 30, (int(abs((ships[i].getPosition().y - 200))) / 30)), i, false);
	//	cout << "\nShip " << i + 1 << " set to:";
	//	player.getShipPos(i);
	}

	while (k < 10)
	{
		bool add = true;
		bool rotation = false;
		FloatRect box;
		Pos randPos;
		rotation = rand() % 2;
		if (k < 4)
			randPos.setPos(rand() % 10, rand() % 10);
		else
			if (k < 7)
				if (rotation)
					randPos.setPos(rand() % 9, rand() % 10);
				else
					randPos.setPos(rand() % 10, rand() % 9);
			else
				if(k<9)
					if(rotation)
						randPos.setPos(rand() % 8, rand() % 10);
					else
						randPos.setPos(rand() % 10, rand() % 8);
				else
					if (rotation)
						randPos.setPos(rand() % 7, rand() % 10);
					else
						randPos.setPos(rand() % 10, rand() % 7);
		if (k < 4) {
			box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
			box.width += 30; box.height += 30;
		}
		else
			if (k < 7) 
				if (!rotation) {
					box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
					box.width += 30; box.height += 60;
				}
				else {
					box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
					box.width += 60; box.height += 30;
				}
			else
				if(k < 9)
					if(!rotation){
						box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
						box.width += 30; box.height += 90;
					}
					else {
						box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
						box.width += 90; box.height += 30;
					}
				else
					if (!rotation) {
						box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
						box.width += 30; box.height += 120;
					}
					else {
						box.left = 600 + randPos.x * 30; box.top = 200 + randPos.y * 30;
						box.width += 120; box.height += 30;
					}


		if (k != 0)
		for (int i = 0; i < cpuShipsBox.size() ; i++)
				if (cpuShipsBox[i].intersects(box))
					add = false;

		if (add)
		{
			cpuShips.push_back(box);
			box.left -= 30; box.top -= 30;
			box.width += 60; box.height += 60;
			cpuShipsBox.push_back(box);
			CpuPos.push_back(randPos);
			CpuRotation.push_back(rotation);
			k++;
		}
		
	}
	for(int i = 0;i<10;i++) {
		if (i > 3)
			playerCPU.setShip(CpuPos[i], i, CpuRotation[i]);
		else
			playerCPU.setShip(CpuPos[i], i, false);
			//cout << "\nCpuShip " << i + 1 << " set to:";
			//playerCPU.getShipPos(i);
	}

}



void TheGame::StageThree() {/////////////////////////////////////////////////////////////////////////////////////////////////////////Этап 3 - сама игра
	srand(time(NULL));

	goOn = false;

	Sprite Sym1,Num1;
	Sprite Sym2,Num2;
	Sym1.setTexture(TextInformation);
	Sym1.setTextureRect(IntRect(0, 45, 301, 30));
	Sym1.setPosition(100, 170);
	Sym2.setTexture(TextInformation);
	Sym2.setTextureRect(IntRect(0, 45, 301, 30));
	Sym2.setPosition(600, 170);
	Num1.setTexture(TextInformation);
	Num1.setTextureRect(IntRect(0, 75, 301, 30));
	Num1.setRotation(-90);
	Num1.setPosition(70, 501);
	Num2.setTexture(TextInformation);
	Num2.setTextureRect(IntRect(0, 75, 301, 30));
	Num2.setRotation(-90);
	Num2.setPosition(570, 501);

	Sprite textInformation1;
	Sprite textInformation2;
	Sprite TextYOU;
	Sprite TextCPU;
	textInformation1.setTexture(TextInformation);
	textInformation1.setTextureRect(IntRect(0, 0, 170, 45));
	textInformation1.setPosition(150, 545);

	textInformation2.setTexture(TextInformation);
	textInformation2.setTextureRect(IntRect(0, 0, 170, 45));
	textInformation2.setPosition(650, 545);

	TextYOU.setTexture(TextInformation);
	TextYOU.setTextureRect(IntRect(171, 1, 106, 36));
	TextYOU.setPosition(200, 75);

	TextCPU.setTexture(TextInformation);
	TextCPU.setTextureRect(IntRect(280, 1, 106, 37));
	TextCPU.setPosition(700, 75);

	RectangleShape indicator,indicator2;
	indicator.setSize(Vector2f(30, 30));
	indicator.setOutlineThickness(4);
	indicator.setOutlineColor(Color::Black);
	indicator.setPosition(150, 80);

	indicator2.setSize(Vector2f(30, 30));
	indicator2.setOutlineThickness(4);
	indicator2.setOutlineColor(Color::Black);
	indicator2.setPosition(650, 80);

	Texture IndicatorShoot;
	IndicatorShoot.loadFromImage(markImg);
	Sprite shootIndicator;
	shootIndicator.setTexture(IndicatorShoot);
	shootIndicator.setTextureRect(IntRect(331, 30, 30, 31));
	shootIndicator.setPosition(570, 170);

	sf::Text lastTurnP,lastTurnC, lastResultP, lastResultC;
	sf::Font font; font.loadFromFile("14722.ttf");
	lastTurnP.setFont(font); lastTurnC.setFont(font); lastResultP.setFont(font); lastResultC.setFont(font);
	lastTurnP.setCharacterSize(15); lastTurnC.setCharacterSize(15); lastResultP.setCharacterSize(15); lastResultC.setCharacterSize(15);
	lastTurnP.setPosition(236,545); lastTurnC.setPosition(736, 545); lastResultP.setPosition(242, 571); lastResultC.setPosition(742, 571);
	lastTurnP.setFillColor(Color::Black); lastTurnC.setFillColor(Color::Black); lastResultP.setFillColor(Color::Black); lastResultC.setFillColor(Color::Black);
	lastTurnP.setString("None"); lastTurnC.setString("None"); lastResultP.setString("None"); lastResultC.setString("None");

	string lastTurn;
	bool Aimed = false;
	Pos lastAim,lastPos1,lastPos2;
	Sprite mark;

	vector<Pos> playerPlainPos;
	vector<bool> playerPlain;
	vector<bool> cpuPlain;

	player.turn = true;
	for (int i = 0; i < 100; i++) {
		cpuPlain.push_back(true);
		playerPlain.push_back(true);
	}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			playerPlainPos.push_back(Pos(i, j));

	int number,CPUnumber,randPoint;

	mark.setTexture(markText);

	bool dX = false, dY = false,dInc = false,dDec = false,shootMiss = false;

	float sec = 2, time = 0;

	sf::RenderWindow mainWin(sf::VideoMode(1000, 800), "The Game!", sf::Style::Close);
	mainWin.setFramerateLimit(100);

	vector<Sprite> xmark;
	bool isSet = false,CPUisSet = false,timer = false;

	while (mainWin.isOpen())
	{

		if (player.turn)
			indicator.setFillColor(Color::Green);
		else
			indicator.setFillColor(Color::Red);
		if (playerCPU.turn)
			indicator2.setFillColor(Color::Green);
		else
			indicator2.setFillColor(Color::Red);
		Vector2i pixelPos = Mouse::getPosition(mainWin);

		sf::Event event;
		while (mainWin.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				mainWin.close();

			}
		}

		if (playerCPU.getNumberOfShips() == 0) {
			win = true;
			goOn = true;
			mainWin.close();
		}
		if (player.getNumberOfShips() == 0) {
			goOn = true;
			mainWin.close();
		}

		////////////////////////////////////////////////////////////////////////////////////////Ход игрока
		if(player.turn)
		if (event.type == sf::Event::MouseButtonPressed) {
			if (event.mouseButton.button == sf::Mouse::Left) {
				if ((pixelPos.x > 600) && (pixelPos.x < 900) && (pixelPos.y > 200) && (pixelPos.y < 500))
				if (cpuPlain[(pixelPos.x-600)/30 + ((pixelPos.y-200)/30)*10])
				{
					//cout << "Pos:(" << (event.mouseButton.x - 600) / 30 << "," << (event.mouseButton.y - 200) / 30 << ")\n";
					//cout << "PosVector:(" << (pixelPos.x - 600) / 30 + ((pixelPos.y - 200) / 30) * 10  << ")\n";
					///////////////////////////////////////////Проверка,куда кликнул игрок
					for (int i = 0; i < cpuShips.size(); i++)
						if (cpuShips[i].contains(pixelPos.x, pixelPos.y))
						{
							mark.setTextureRect(IntRect(331, 0, 30, 30));
							isSet = true;
							number = i;
							break;
						}
					if (!isSet) {
						mark.setTextureRect(IntRect(300, 30, 31, 31));
						player.turn = false;
						playerCPU.turn = true;
						lastResultP.setString("Missed");
					}
					///////////////////////////////////////////Конец проверки
					if (isSet)
					{
						playerCPU.pships[number].Damage();
						if (!playerCPU.pships[number].isAlive) {
							playerCPU.killShip();
							//cout << "\nCpuShip " << number + 1 << " is dead!\n";
							lastResultP.setString("Killed");
						}
						else
							lastResultP.setString("Damaged");
					}

					char sym = char(((pixelPos.x - 600) / 30) + 65), num = char(((pixelPos.y - 200) / 30) + 48);
					lastTurn = num; lastTurn += sym;
					lastTurnP.setString(lastTurn);


					mark.setPosition(((event.mouseButton.x - 600) / 30) * 30 + 600, ((event.mouseButton.y - 200) / 30) * 30 + 200);
					xmark.push_back(mark);
					if (cpuPlain[(pixelPos.x - 600) / 30 + ((pixelPos.y - 200) / 30) * 10 ]) {
						cpuPlain[(pixelPos.x - 600) / 30 + ((pixelPos.y - 200) / 30) * 10 ] = false;
						//cout << "ClickClacked!\n";
					if(isSet)
					if(!playerCPU.pships[number].isAlive)
						for (int i = 0; i < player.pships[number].shipSurrounding.size(); i++) {
							if ((playerCPU.pships[number].shipSurrounding[i].x > -1) && (playerCPU.pships[number].shipSurrounding[i].y > -1) && (playerCPU.pships[number].shipSurrounding[i].x < 10) && (playerCPU.pships[number].shipSurrounding[i].y < 10))
							{
								if (cpuPlain[playerCPU.pships[number].shipSurrounding[i].x + playerCPU.pships[number].shipSurrounding[i].y * 10]) {
									mark.setTextureRect(IntRect(300, 30, 31, 31));
									mark.setPosition(playerCPU.pships[number].shipSurrounding[i].x * 30 + 600, playerCPU.pships[number].shipSurrounding[i].y * 30 + 200);
									xmark.push_back(mark);
									cpuPlain[playerCPU.pships[number].shipSurrounding[i].x + playerCPU.pships[number].shipSurrounding[i].y * 10] = false;
								}
							}
						}
					}
					isSet = false;
				}
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////Конец хода игрока
		if (player.turn)
			indicator.setFillColor(Color::Green);
		else
			indicator.setFillColor(Color::Red);
		if (playerCPU.turn)
			indicator2.setFillColor(Color::Green);
		else
			indicator2.setFillColor(Color::Red);

		mainWin.clear(sf::Color::Color(169, 169, 169));
		mainWin.draw(plain1);
		mainWin.draw(plain2);
		for (int i = 0; i < ships.size(); i++)
			mainWin.draw(ships[i]);
		mainWin.draw(textInformation1);
		mainWin.draw(textInformation2);
		mainWin.draw(lastTurnP); mainWin.draw(lastTurnC); mainWin.draw(lastResultP); mainWin.draw(lastResultC);
		mainWin.draw(TextYOU);
		mainWin.draw(TextCPU);
		mainWin.draw(Sym1);
		mainWin.draw(Sym2);
		mainWin.draw(Num1);
		mainWin.draw(Num2);
		mainWin.draw(indicator);
		mainWin.draw(indicator2);
		if (!xmark.empty())
			for (int i = 0; i < xmark.size(); i++)
				mainWin.draw(xmark[i]);
		mainWin.draw(shootIndicator);
		mainWin.display();


		//////////////////////////////////////////////////////////////////////////////////////Ход компьютера
		if (playerCPU.turn)
			if (!Aimed)
			{
			randPoint = rand() % playerPlainPos.size();
				Pos randPos = playerPlainPos[randPoint];
				if (playerPlain[randPos.x + randPos.y * 10])
				{
					for (int i = 0; i < ships.size(); i++)
						if (ships[i].getGlobalBounds().contains(randPos.x * 30 + 103, randPos.y * 30 + 203))
						{
							Aimed = true;
							CPUnumber = i;
							CPUisSet = true;
							lastPos1 = randPos;
							//cout << "\nrandPos = " << randPos.x << "," << randPos.y << "\nlastPos1 = " << lastPos1.x << "," << lastPos1.y;
						}
					if (CPUisSet)
					{
						mark.setTextureRect(IntRect(331, 0, 30, 30));
						player.pships[CPUnumber].Damage();
						if (!player.pships[CPUnumber].isAlive) {
							player.killShip();
							lastResultC.setString("Killed");
							Aimed = false;
							for (int i = 0; i < player.pships[CPUnumber].shipSurrounding.size(); i++) {
								if ((player.pships[CPUnumber].shipSurrounding[i].x > -1) && (player.pships[CPUnumber].shipSurrounding[i].y > -1) && (player.pships[CPUnumber].shipSurrounding[i].x < 10) && (player.pships[CPUnumber].shipSurrounding[i].y < 10))
									playerPlain[player.pships[CPUnumber].shipSurrounding[i].x + player.pships[CPUnumber].shipSurrounding[i].y * 10] = false;
								//cout << "\nplayersShip[" << CPUnumber + 1 << "] surroundings is locked!";
							}
						}
						else
							lastResultC.setString("Damaged");
						timer = true;
					}
					if (!CPUisSet)
					{
						mark.setTextureRect(IntRect(300, 30, 31, 31));
						playerCPU.turn = false;
						player.turn = true;
						lastResultC.setString("Missed");
						timer = true;
					}
					char sym = char(randPos.x + 65), num = char(randPos.y + 48);
					lastTurn = num; lastTurn += sym;
					lastTurnC.setString(lastTurn);


					mark.setPosition(randPos.x * 30 + 100, randPos.y * 30 + 200);
					shootIndicator.setPosition(randPos.x * 30 + 100, randPos.y * 30 + 200);
					xmark.push_back(mark);
					CPUisSet = false;
					if (playerPlain[randPos.x + randPos.y * 10]) {
						playerPlain[randPos.x + randPos.y * 10] = false;
						//cout << "\nBeepBoop!";
					}
					//cout << "\nerased element " << playerPlainPos[randPoint].x << "," << playerPlainPos[randPoint].y;
					playerPlainPos.erase(playerPlainPos.begin() + randPoint);
					CPUisSet = false;
				}
				else
					playerPlainPos.erase(playerPlainPos.begin() + randPoint);
			}
			/////////////////////////////////////////////////////////////////////////////Алгоритм убийства 2х и более -палубных кораблей
			else {
				if (player.pships[CPUnumber].isAlive)
				{
					if (!dX && !dY) {
						randPoint = rand() % 4;
						switch (randPoint) {
						case 0:
							lastPos2.x = lastPos1.x - 1;
							lastPos2.y = lastPos1.y;
							break;
						case 1:
							lastPos2.x = lastPos1.x + 1;
							lastPos2.y = lastPos1.y;
							break;
						case 2:
							lastPos2.x = lastPos1.x;
							lastPos2.y = lastPos1.y - 1;
							break;
						case 3:
							lastPos2.x = lastPos1.x;
							lastPos2.y = lastPos1.y + 1;
							break;
						default:
							break;
						}
						//cout << "\nWorking!1" << "lastPos1 = " << lastPos1.x << "," << lastPos1.y << " lastPos2 = " << lastPos2.x << "," << lastPos2.y;
					}
					else
					{
							//cout << "\nlastPos2 before set/change direct = " << lastPos2.x << "," << lastPos2.y;
							if (dX&&dDec)
								lastPos2.x =lastPos2.x - 1;
							if (dX&&dInc)
								lastPos2.x =lastPos2.x + 1;
							if (dY&&dDec)
								lastPos2.y =lastPos2.y -1;
							if (dY&&dInc)
								lastPos2.y =lastPos2.y +1;
							//cout << "\nlastPos2 after set/change direct = " << lastPos2.x << "," << lastPos2.y;
						
					}
					if (plain1.getGlobalBounds().contains(lastPos2.x * 30 + 115, lastPos2.y * 30 + 215)){
						if (playerPlain[lastPos2.x + lastPos2.y * 10]) {
							for (int i = 0; i < ships.size(); i++)
								if (ships[i].getGlobalBounds().contains(lastPos2.x * 30 + 103, lastPos2.y * 30 + 203))
								{
									CPUisSet = true;
									//cout <<  "\nlastPos1 = " << lastPos1.x << "," << lastPos1.y;
								}
							if (CPUisSet)
							{
								mark.setTextureRect(IntRect(331, 0, 30, 30));
								player.pships[CPUnumber].Damage();
								if (!player.pships[CPUnumber].isAlive) {
									player.killShip();
									lastResultC.setString("Killed");
									Aimed = false;
									dX = false; dY = false; dDec = false; dInc = false; shootMiss = false;
									for (int i = 0; i < player.pships[CPUnumber].shipSurrounding.size(); i++) {
										if ((player.pships[CPUnumber].shipSurrounding[i].x > -1) && (player.pships[CPUnumber].shipSurrounding[i].y > -1) && (player.pships[CPUnumber].shipSurrounding[i].x < 10) && (player.pships[CPUnumber].shipSurrounding[i].y < 10))
											playerPlain[player.pships[CPUnumber].shipSurrounding[i].x + player.pships[CPUnumber].shipSurrounding[i].y * 10] = false;
										//cout << "\nplayersShip[" << CPUnumber + 1 << "] surroundings is locked!";
									}
								}
								else {
									lastResultC.setString("Damaged");
									if (!dX && !dY)
										switch (randPoint) {
										case 0:
											dX = true; dDec = true;
											break;
										case 1:
											dX = true; dInc = true;
											break;
										case 2:
											dY = true; dDec = true;
											break;
										case 3:
											dY = true; dInc = true;
											break;
										default:
											break;
										}

								}
								timer = true;
							}
							if (!CPUisSet)
							{
								mark.setTextureRect(IntRect(300, 30, 31, 31));
								playerCPU.turn = false;
								player.turn = true;
								lastResultC.setString("Missed");
								timer = true;
								if (dX || dY) {
									swap(dDec, dInc);
									shootMiss = true;
									//cout << "Direct set!";
								}
							}
							char sym = char(lastPos2.x + 65), num = char(lastPos2.y + 48);
							lastTurn = num; lastTurn += sym;
							lastTurnC.setString(lastTurn);


							mark.setPosition(lastPos2.x * 30 + 100, lastPos2.y * 30 + 200);
							shootIndicator.setPosition(lastPos2.x * 30 + 100, lastPos2.y * 30 + 200);
							xmark.push_back(mark);
							CPUisSet = false;
							if (playerPlain[lastPos2.x + lastPos2.y * 10]) {
								playerPlain[lastPos2.x + lastPos2.y * 10] = false;
								//cout << "\nBeepBoop!";
							}
							if (shootMiss) {
								lastPos2.x = lastPos1.x;
								lastPos2.y = lastPos1.y;
								shootMiss = false;
							}

						}
						else {
							if (dX || dY) {
								swap(dDec, dInc);
								//cout << "\nChange DIRECT! 121212";
								lastPos2.x = lastPos1.x;
								lastPos2.y = lastPos1.y;
							}
						}
				}
					else
					{
						if (dX || dY) {
							swap(dDec, dInc);
							//cout << "\nChange DIRECT!";
							lastPos2.x = lastPos1.x;
							lastPos2.y = lastPos1.y;
						}
						else{}
					}

				}
			}
		///////////////////////////////////////////////////////////////////////////////////Конец алгоритма
			if(player.getNumberOfShips() != 0)
				if (!player.pships[0].isAlive && !player.pships[1].isAlive && !player.pships[2].isAlive && !player.pships[3].isAlive) {
					for (int i = 0; i < 100; i++) {
						if (playerPlain[i])
							if (i < 10)
								if (i = 0)
									if (!playerPlain[i + 1] && !playerPlain[i + 10])
										playerPlain[i] = false;
									else {}
								else
									if (i = 9)
										if (!playerPlain[i - 1] && !playerPlain[i + 10])
											playerPlain[i] = false;
										else {}
									else
										if (!playerPlain[i - 1] && !playerPlain[i + 1] && !playerPlain[i + 10])
											playerPlain[i] = false;
										else {}
							else
								if (i > 89)
									if (i = 90)
										if (!playerPlain[i + 1] && !playerPlain[i - 10])
											playerPlain[i] = false;
										else {}
									else
										if (i = 99)
											if (!playerPlain[i - 1] && !playerPlain[i - 10])
												playerPlain[i] = false;
											else {}
										else
											if (!playerPlain[i - 1] && !playerPlain[i + 1] && !playerPlain[i - 10])
												playerPlain[i] = false;
											else {}
								else
									if (i % 10 == 0)
										if (!playerPlain[i - 10] && !playerPlain[i + 10] && !playerPlain[i + 1])
											playerPlain[i] = false;
										else {}
									else
										if (i % 10 == 9)
											if (!playerPlain[i - 10] && !playerPlain[i + 10] && !playerPlain[i - 1])
												playerPlain[i] = false;
											else {}
										else
											if (!playerPlain[i - 10] && !playerPlain[i + 10] && !playerPlain[i - 1] && !playerPlain[i + 1])
												playerPlain[i] = false;
					}
				}
		//////////////////////////////////////////////////////////////////////////////////////Конец хода компьютера

				/////////////////////////////////////////////////////////////////////////Задержка хода компьютера
		if (timer) {
			sf::Clock clock;
			while (time < sec)
				time = clock.getElapsedTime().asSeconds();
			timer = false;

		}

		time = 0;
		////////////////////////////////////////////////////////////////////////Конец задержки









		mainWin.clear(sf::Color::Color(169, 169, 169));
		mainWin.draw(plain1);
		mainWin.draw(plain2);
		for (int i = 0; i < ships.size(); i++)
			mainWin.draw(ships[i]);
		mainWin.draw(textInformation1);
		mainWin.draw(textInformation2);
		mainWin.draw(lastTurnP); mainWin.draw(lastTurnC); mainWin.draw(lastResultP); mainWin.draw(lastResultC);
		mainWin.draw(TextYOU);
		mainWin.draw(TextCPU);
		mainWin.draw(Sym1);
		mainWin.draw(Sym2);
		mainWin.draw(Num1);
		mainWin.draw(Num2);
		mainWin.draw(indicator);
		mainWin.draw(indicator2);
		if (!xmark.empty())
			for (int i = 0; i < xmark.size(); i++)
				mainWin.draw(xmark[i]);
		mainWin.draw(shootIndicator);
		mainWin.display();
	}
}


void TheGame::StageFinal() {
	sf::RenderWindow finalWin(sf::VideoMode(500, 250), "The Final!", sf::Style::Close);
	finalWin.setFramerateLimit(100);



	Image winlose;
	winlose.loadFromFile("image/WinLose.png");
	Texture losewin;
	Texture restartButton;
	Sprite buttonRestart;
	restartButton.loadFromFile("image/TextInf.png");
	buttonRestart.setTexture(restartButton);
	buttonRestart.setTextureRect(IntRect(300, 45, 88, 31));
	Sprite wonlost;
	winlose.createMaskFromColor(Color::White);
	losewin.loadFromImage(winlose);
	wonlost.setTexture(losewin);
	if (win) {
		wonlost.setTextureRect(IntRect(0,0,336,47));
	}
	else
	{
		wonlost.setTextureRect(IntRect(0,48,404,47));
	}

	wonlost.setPosition(80,95);
	buttonRestart.setPosition(200, 200);

	while (finalWin.isOpen())
	{
		Vector2i pixelPos = Mouse::getPosition(finalWin);
		sf::Event event;

		while (finalWin.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				goOn = false;
				finalWin.close();
			}

		}
		if (event.type == Event::MouseButtonPressed)
			if (event.key.code == Mouse::Left)
				if (buttonRestart.getGlobalBounds().contains(pixelPos.x, pixelPos.y))
				{
					goOn = true;
					finalWin.close();

				}
		if (win) {
			finalWin.clear(Color::Red);
		}
		else
		{
			finalWin.clear(Color::Color(0, 0, 139));
		}


		finalWin.draw(buttonRestart);
		finalWin.draw(wonlost);
		finalWin.display();

	}
}

void TheGame::Texturising() {

	plain1.setTexture(Text);
	plain1.setTextureRect(IntRect(0, 0, 301, 301));
	plain1.setPosition(100, 200);

	plain2.setTexture(Text);
	plain2.setTextureRect(IntRect(0, 0, 301, 301));
	plain2.setPosition(600, 200);


	////////////////////////////////////////////////////////////////////////////////////////////////Спрайты кораблей
	for (int i = 0; i < 10; i++)
	{
		Sprite ship;
		if (i < 4) {
			ship.setTexture(shipText);
			ship.setPosition(600 + i * 40, 200);
		}
		else
			if (i < 7) {
				ship.setTexture(shipText);
				ship.setTextureRect(IntRect(0, 0, 30, 60));
				ship.setPosition(600 + (i - 4) * 70, 240);
			}
			else {
				if (i < 9) {
					ship.setTexture(shipText);
					ship.setTextureRect(IntRect(0, 0, 30, 90));
					ship.setPosition(600 + (i - 7) * 100, 320);
				}
				else {
					ship.setTexture(shipText);
					ship.setTextureRect(IntRect(0, 0, 30, 120));
					ship.setPosition(600 , 420);
				}
			}
		ships.push_back(ship);
	}
	////////////////////////////////////////////////////////////////////////////////////////////////Конец спрайтов кораблей
}

TheGame::~TheGame()
{
}
