#pragma once
#include <string>
#define AGE_CH 1
#define NAME_CH 2
#define SURNAME_CH 3

using namespace std;

class Child
{
private:
	int age;
	string name;
	string surname;
public:
	Child();
	Child(const Child& ch_obj);
	Child(int age,string name,string surname);
	~Child();
	void setVal(int val,int set);
	void setVal(int val, string set);
	void getVal(int val);
};

