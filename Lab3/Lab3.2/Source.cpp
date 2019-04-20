#include"Tiles.h"

using namespace std;

int main()
{
	Tiles tile1(5, 5, 100, "<<GopstopOOO>>"), tile2(3, 4, 40, "<<DinDong>>"), tile3(1, 1, 10, "<<PingPong>>");
	cout << "First tiles:\n";
	tile1.getData();
	cout << "Second tiles:\n";
	tile2.getData();
	cout << "Third tiles:\n";
	tile3.getData();

	system("pause");
}