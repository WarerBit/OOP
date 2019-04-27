#include "Human.h"
#include<ctime>

int main()
{
	srand(time(NULL));
	Student st("Ivan", "Ivanov", "Ivanovich", rand()%4+17, rand()%2);
	Boss bs("Petr", "Petrov", "Petrovich", rand() % 10 + 30, rand() % 10 + 20);
	cout << "Student:\n";
	st.print();
	cout << "\nBoss:\n";
	bs.print();
	system("pause");
}