#include "StudentGroup.h"
#include <iostream>

int main()
{
	StudentGroup group;
	string vvod; int vod;
	cout << "Vvedite cod gruppi:";
	cin >> vvod;
	group.setSGValue(vvod);
	cout << "Vvedite curs gruppi:";
	cin >> vod;
	group.setSGValue(vod);
	cout << "Code:" << group.getSGCode() << endl << "Course:" << group.getSGCourse() << endl;

	system("pause");

}