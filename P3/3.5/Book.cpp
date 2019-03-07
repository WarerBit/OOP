#include "Book.h"



Book::Book()
{
	author = "";
	title = "";
	page = 0;
}

void Book::setBookValue(int name, string value) {
	if (name == B_AUTHOR)
		author = value;
	if (name == B_TITLE)
		title = value;
}

void Book::setBookValue(int name, int value) {
	page = value;
}

string Book::getBookValue(int name) {
	if (name == B_AUTHOR)
		return author;
	if (name == B_TITLE)
		return title;
}

int Book::getBookPage() {
	return page;
}

Book::~Book()
{
}
