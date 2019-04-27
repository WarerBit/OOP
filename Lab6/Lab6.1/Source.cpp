#include"Student.h"

int main()
{
	srand(time(NULL));
	Starosta st(18, 7, "Ivan Ivanov", "INBO-04-18", rand() % 10);

	cout << "Starosta: " << st.getName() << " " << "\nAge - " << st.getAge() << "\nNumber - " << st.getNumber() << "\nGroup - " << st.getGroup() << "\nAlready missed " << st.getMiss() << " classes\n";
	st.miss();
	cout << endl;
	st.check();
	system("pause");
}