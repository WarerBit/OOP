#include"Student.h"
#include<vector>

int main()
{
	vector<Student> stud;
	int age; string name;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter age and name for " << i + 1 << " student:";
		cin >> age >> name;
		stud.push_back(Student(age, name));
	}

	for (auto s : stud)
		cout << "\nStudent " << ": Age - " << s.getAge() << ", Name -" << s.getName();
	system("pause");
}