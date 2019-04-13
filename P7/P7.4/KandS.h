#pragma once
#include<iostream>
#include<ctime>

using namespace std;
class Keyboard
{
protected:
	int buttons;
public:
	Keyboard(int buttons) {
		this->buttons = buttons;
	}
	virtual void slam() = 0;
	void setButtons(int buttons) {
		this->buttons = buttons;
	}
	int getButtons() {
		return buttons;
	}
};

class Screen
{
protected:
	int length;
	int width;
public:
	Screen(int length, int width) {
		this->length = length;
		this->width = width;
	}
	virtual void punch() = 0;
	void setSize(int length, int width) {
		this->length = length;
		this->width = width;
	}
	int getLength() {
		return length;
	}
	int getWidth() {
		return width;
	}
};

class PC : public Screen,public Keyboard {
public:
	PC(int buttons,int length,int width) : Keyboard(buttons),Screen(length,width){}
	void slam() {
		srand(time(NULL));
		this->buttons = rand() % 50 + 25;
		cout << "U've slammed ur keyboard,so there are left only " << this->buttons << " buttons...\n";
	}
	void punch() {
		cout << "U've punched ur screen,so there is no screen anymore...\n";
	}
};

class PCP : public Screen,public Keyboard {
public:
	PCP(int buttons, int length, int width) : Keyboard(buttons), Screen(length, width) {}
	void slam() {
		cout << "U've slammed ur PCP,so there is no PCP anymore...\n";
	}
	void punch() {
		cout << "U've punched ur PCP's screen,so there is no PCP's screen anymore... But hey! U still has PCP's keyboard ;)\n";
	}
};

class Phone : public Screen,public Keyboard {
public:
	Phone(int buttons, int length, int width) : Keyboard(buttons), Screen(length, width){}
	void slam() {
		cout << "U've slammed ur phone...\nWhy did u do that? It was pretty expensive phone...\n";
	}
	void punch() {
		cout << "U've punched ur phone,so... oh,wait,it was nokia 3310,so I guess u've broken ur arm...\n";
	}
};