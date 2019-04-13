#include <iostream>
#include<Windows.h>
#include <fstream>
using namespace std;

int main()
{
	ofstream filex("dingdongpingpong.txt");

	char s;

	cin.get(s);
	while (s != '\n') {
		filex << s;
		cin.get(s);
	}

	filex.close();

	system("pause");
}
