#include "KandS.h"

int main()
{
	srand(time(NULL));
	int n;
	cout << "Choose:\n1 - PC\n2 - PCP\n3 - Phone\nEnter:";
	cin >> n;
	switch (n) {
	case 1: {
		PC pc(100, rand() % 10 * 10, rand() % 10 * 10);
		cout << "Ur PC's keyboard has " << pc.getButtons() << " buttons and the size of ur screen is " << pc.getLength() << "*" << pc.getWidth() << endl;
		cout << "Do u wanna slam(1) or punch(2) or nothing(0)?Enter:";
		cin >> n;
		if (n == 1)
			pc.slam();
		if (n == 2)
			pc.punch();
		break;
	}
	case 2: {
		PCP pcp(100, rand() % 10 * 10, rand() % 10 * 10);
		cout << "Ur PCP's keyboard has " << pcp.getButtons() << " buttons and the size of ur screen is " << pcp.getLength() << "*" << pcp.getWidth() << endl;
		cout << "Do u wanna slam(1) or punch(2) or nothing(0)?Enter:";
		cin >> n;
		if (n == 1)
			pcp.slam();
		if (n == 2)
			pcp.punch();
		break;
	}
	case 3: {
		Phone phone(100, rand() % 10, rand() % 10);
		cout << "Ur Phone has " << phone.getButtons() << " buttons and the size of ur screen is " << phone.getLength() << "*" << phone.getWidth() << endl;
		cout << "Do u wanna slam(1) or punch(2) or nothing(0)?Enter:";
		cin >> n;
		if (n == 1)
			phone.slam();
		if (n ==2)
			phone.punch();
		break;
	}
	default:
		break;
	}
	system("pause");

}