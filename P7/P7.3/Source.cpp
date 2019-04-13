#include"Vehicle.h"
#include<ctime>

int main()
{
	srand(time(NULL));
	int n; string color;
	cout << "Choose:\n1 - Bike\n2 - Automobile\n3 - Bus\nEnter:";
	cin >> n;
	switch (n) {
	case 1:
	{
		Bike bike(rand() % 3 + 2, rand() % 2 + 1, "0");
			cout << "Enter bike's color:";
			cin >> color;
			bike.setColor(color);
			cout << "Ur bike has " << bike.getWheels() << " wheels, " << bike.getSeats() << " seats, and it's color is " << bike.getColor() << endl;
			bike.speed();
			break;
	}
	case 2:
	{
		Automobile car(4, rand() % 4*2 + 2, "0");
		cout << "Enter car's color:";
		cin >> color;
		car.setColor(color);
		cout << "Ur car has " << car.getWheels() << " wheels, " << car.getSeats() << " seats, and it's color is " << car.getColor() << endl;
		car.speed();
		break;
	}
	case 3:
	{
		Bus bus((rand()%3)*2+4, rand()%10+10, "0");
		cout << "Enter bus's color:";
		cin >> color;
		bus.setColor(color);
		cout << "Ur bus has " << bus.getWheels() << " wheels, " << bus.getSeats() << " seats, and it's color is " << bus.getColor() << endl;
		bus.speed();
		break;
	}
	default:
		break;
	}
	system("pause");
}