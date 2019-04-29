#pragma once
#include <string>
#define SG_CODE		0
#define SG_COURSE	1

using namespace std;

class StudentGroup
{
	string code;
	int course;
public:
	StudentGroup();

	void setSGValue(string value);

	void setSGValue(int value);

	string getSGCode();

	int getSGCourse();

	~StudentGroup();
};

