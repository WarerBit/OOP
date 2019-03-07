#include "Lib.h"

int main() 
{
	Lib shelf;
	Book book;
	int h, w;
	string s;
	cout << "Vvedite kolichestvo polok i shirinu polki:";
	cin >> h >> w;
	shelf.libCreate(h, w);
	for (int i = 0; i < 3; i++)
	{
		cout << "Dobavte knigu:\n";
		cout << "Author:";
		cin >> s;
		book.setBookValue(B_AUTHOR, s);
		cout << "Title:";
		cin >> s;
		book.setBookValue(B_TITLE, s);
		cout << "Pages:";
		cin >> h;
		book.setBookValue(B_PAGE, h);
		shelf.addBook(book);
	}

	cout << "Vvedite nomer polki i nomer knigi,kotoruu hotite uvidet:";
	cin >> h >> w;
	shelf.getBook(h, w);

	cout << "Vvedite nomer polki i nomer knigi,kotoruu hotite udalit:";
	cin >> h >> w;
	shelf.delBook(h, w);

	system("pause");

}