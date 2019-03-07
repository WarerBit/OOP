#include "Lib.h"
#include <Windows.h>


Lib::Lib()
{
	shelfHeight = 0;
	shelfWidth = 0;
	books.clear();
}

void Lib::libCreate(int H, int W) {
	shelfHeight = H;
	shelfWidth = W;
	books.reserve(H*W);
}

void Lib::addBook(Book book) {
	if (books.size() != shelfHeight * shelfWidth)
		if ((book.getBookValue(B_AUTHOR) != "") && (book.getBookValue(B_TITLE) != "") && (book.getBookPage() != 0))
			books.push_back(book);
		else
			cout << "Can't add this book.\n";
	else
		cout << "No more room in the shelf!\n";
}

void Lib::getBook(int H, int W) {
	if ((H != 0) && (H <= shelfHeight) && (W != 0) && (W <= shelfWidth))
	{
		int place = (H - 1)*(shelfWidth) + W-1;

		if (books.size() > place) {
			cout << "\n___________________________________________\n";
			cout << "Author:" << books[place].getBookValue(B_AUTHOR) << endl;
			cout << "Title:" << books[place].getBookValue(B_TITLE) << endl;
			cout << "Pages:" << books[place].getBookPage() << endl;
			cout << "___________________________________________\n";
		}
		else
			cout << "No book.\n";
	}
	else
		cout << "Wrong height or width!\n";
}

void Lib::delBook(int H, int W) {
	if ((H != 0) && (H <= shelfHeight) && (W != 0) && (W <= shelfWidth))
	{
		int place = (H - 1)*(shelfWidth) + W-1;

		if (books.size() > place) {
			getBook(H, W);
			books.erase(books.begin() + place);
			cout << "\nThis book was deleted.\n";
		}
		else
			cout << "No book.\n";
	}
	else
		cout << "Wrong height or width!\n";
}

Lib::~Lib()
{
}
