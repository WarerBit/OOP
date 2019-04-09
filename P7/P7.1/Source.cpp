#include "Animal.h"
#include <time.h>


int main()
{

	srand(time(NULL));

	string sc = "black", sd = "white", sp = "rainbow";
	int ch;
	cout << "Enter:\n 1 - Cat\n 2 - Dog\n 3 - Parrot" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1: {
		Cat cat(rand() % 9 + 1, 4, sc);
		cout << "Cat's age is " << cat.getAge() << ", it has " << cat.getLegs() << " legs,and it's color is " << sc << endl;
		cout << "Cat says - ";
		cat.sound();
		break;
	}
	case 2: {
		Dog dog(rand() % 9 + 1, 4, sd);
		cout << "Dog's age is " << dog.getAge() << ", it has " << dog.getLegs() << " legs,and it's color is " << sd << endl;
		cout << "Dog says - ";
		dog.sound();
		break;
	}
	case 3: {
		Parrot parrot(rand() % 9 + 1, 2, sp);
		cout << "Parrot's age is " << parrot.getAge() << ", it has " << parrot.getLegs() << " legs,and it's color is " << sp << endl;
		cout << "Parrot says - ";
		parrot.sound();
		break;
	}
	default:
		break;

	}
	system("pause");
}