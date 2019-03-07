#pragma once
#include <string>
#define B_AUTHOR	0
#define B_TITLE		1
#define B_PAGE		2

using namespace std;

class Book
{
	string author;
	string title;
	int page;
public:
	Book();

	void setBookValue(int name, string value);

	void setBookValue(int name, int value);

	string getBookValue(int name);

	int getBookPage();
	
	~Book();
};

