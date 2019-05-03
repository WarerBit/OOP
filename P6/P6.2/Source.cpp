#include "Function.h"
#include <string>
int main()
{
	double x, y; int ch;
	cout << "Choose:\n 0 - Const\n 1 - Argument\n 2 - Sum\n 3 - Difference\n 4 - Product\n 5 - Quotient\n 6 - Sin\n 7 - Cos\n 8 - Exp\n 9 - Ln" << endl << "Entered:";
	cin >> ch;

	switch(ch){
	case 0: {
		cout << "Enter const:";
		cin >> y;
		cout << "Enter x:";
		cin >> x;
		Const c(y);
		c.printF();
		cout << "f(" << x << ") = " << c.count(x) << endl;
		c.takeP();
		break;
	}
	case 1: {
		cout << "Enter x:";
		cin >> x;
		Argument a;
		a.printF();
		cout << "f(" << x << ") = " << a.count(x) << endl;
		a.takeP();
		break;
	}
	case 2: {
		cout << "Enter x , y:";
		cin >> x >> y;
		Sum sum(y);
		sum.printF();
		cout << "f(" << x << ") = " << sum.count(x) << endl;
		sum.takeP();
		break;
	}
	case 3: {
		cout << "Enter x , y:";
		cin >> x >> y;
		Dif dif(y);
		dif.printF();
		cout << "f(" << x << ") = " << dif.count(x) << endl;
		dif.takeP();
		break;
	}
	case 4: {
		cout << "Enter x , y:";
		cin >> x >> y;
		Prod prod(y);
		prod.printF();
		cout << "f(" << x << ") = " << prod.count(x) << endl;
		prod.takeP();
		break;
	}
	case 5: {
		cout << "Enter x , y:";
		cin >> x >> y;
		Quot quot(y);
		quot.printF();
		cout << "f(" << x << ") = " << quot.count(x) << endl;
		quot.takeP();
		break;
	}
	case 6: {
		cout << "Enter x:";
		cin >> x;
		Sin s;
		s.printF();
		cout << "f(" << x << ") = " << s.count(x) << endl;
		s.takeP();
		break;
	}
	case 7: {
		cout << "Enter x:";
		cin >> x;
		Cos co;
		co.printF();
		cout << "f(" << x << ") = " << co.count(x) << endl;
		co.takeP();
		break;
	}
	case 8: {
		cout << "Enter x:";
		cin >> x;
		Exp ex;
		ex.printF();
		cout << "f(" << x << ") = " << ex.count(x) << endl;
		ex.takeP();
		break;
	}
	case 9: {
		cout << "Enter x:";
		cin >> x;
		Ln L;
		L.printF();
		cout << "f(" << x << ") = " << L.count(x) << endl;
		L.takeP();
		break;
	}
	default:
		break;

	}
	system("pause");
}
