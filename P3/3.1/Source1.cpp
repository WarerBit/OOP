#include "Book.h"
#include <iostream>
#include <ctime>

int main()
{
	Book kniga;
	string vvod;
	int vod;
	cout << "Vvedite avtora:";
	cin >> vvod;
	kniga.setBookValue(B_AUTHOR, vvod);
	cout << "Vvedite nazvanie:";
	cin >> vvod;
	kniga.setBookValue(B_TITLE, vvod);
	cout << "Vvedite stranicu:";
	cin >> vod;
	kniga.setBookValue(B_PAGE, vod);
	cout << kniga.getBookValue(B_AUTHOR) << " " << kniga.getBookValue(B_TITLE) << " " << kniga.getBookPage() << endl;

	system("pause");
}