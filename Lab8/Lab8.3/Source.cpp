#include"Car.h"
#include<queue>

int main()
{
	queue<Car> cars;
	string color, model;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " car(color,model):";
		cin >> color >> model;
		cars.push(Car(color, model));
	}

	for (int i = 0; !cars.empty(); i++)
	{
		cout << i + 1 <<":";
		cars.front().getCar();
		cars.pop();
	}
	system("pause");
}