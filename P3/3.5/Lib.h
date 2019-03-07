#pragma once
#include <vector>
#include <iostream>
#include "Book.h"

using namespace std;

class Lib
{
	int shelfHeight;
	int shelfWidth;
	vector<Book> books;

public:
	Lib();

	void libCreate(int H, int W);

	void addBook(Book book);

	void getBook(int H, int W);

	void delBook(int H, int W);

	~Lib();
};

