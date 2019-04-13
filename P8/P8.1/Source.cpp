#include <iostream>
#include<string>
#include<Windows.h>
#include <fstream>
using namespace std;

int main()
{
	ifstream filex("dingdongpingpong.txt");

	string s;

	while (!filex.eof()) {
		filex >> s;
		cout << s << endl;
	}

	filex.close();

	system("pause");
}
