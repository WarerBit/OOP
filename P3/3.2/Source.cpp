#include "Car.h"
#include <iostream>

int main()
{
	Car mashina; 
	string vvod; 
	int vod;
	cout << "Vvedite model:";
	cin >> vvod;
	mashina.setCarValue(C_MODEL, vvod);
	cout << "Vvedite kol-vo mest:";
	cin >> vod;
	mashina.setCarValue(C_SEAT, vod);
	cout << "Vvedite cvet:";
	cin >> vvod;
	mashina.setCarValue(C_COLOR, vvod);
	cout << "Model:" << mashina.getCarValue(C_MODEL) << "\nKol-vo mest:" << mashina.getCarSeat() << "\nCvet:" << mashina.getCarValue(C_COLOR);

	system("pause");
}