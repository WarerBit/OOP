#include"Alive.h"
#include<ctime>

int main()
{
	srand(time(NULL));
	Bird bi(rand() % 10, "penguine", false);
	Fish fi(rand() % 15, "shark", "average");
	Animal an(rand() % 10, "cat", 4);
	cout << "Bird:\n" << "Age - " << bi.getAge() << "\nSpicies - " << bi.getSpicies() << "\nFlyable - " << bi.getFlyable();
	cout << "\nFish:\n" << "Age - " << fi.getAge() << "\nSpicies - " << fi.getSpicies() << "\nDepth - " << fi.getDepth();
	cout << "\nAnimal:\n" << "Age - " << an.getAge() << "\nSpicies - " << an.getSpicies() << "\nLegs - " << an.getLegs();
	cout << endl;
	system("pause");
}