#include "StudentGroup.h"



StudentGroup::StudentGroup()
{
}

void StudentGroup::setSGValue(string value) {
	code = value;
}

void StudentGroup::setSGValue(int value) {
	course = value;
}

string StudentGroup::getSGCode() {
	return code;
}

int StudentGroup::getSGCourse() {
	return course;
}

StudentGroup::~StudentGroup()
{
}
