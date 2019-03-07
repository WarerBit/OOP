#include "Vector.h"
#include <iostream>

using namespace std;

int main() 
{
	Vector strelka, napravotrezok;
	double x, y, z,coord;
	cout << "Vvedite coordinati vectora:";
	cin >> x >> y >> z;
	strelka.setVectorCoord(x, y, z);
	cout << "Vvedite coordinati dr vectora:";
	cin >> x >> y >> z;
	napravotrezok.setVectorCoord(x, y, z);
	cout << "Coordinati 1go vectora: " << strelka.getVectorCoord(V_X) << " " << strelka.getVectorCoord(V_Y) << " " << strelka.getVectorCoord(V_Z) << endl;
	strelka.sumVector(napravotrezok);
	cout << "Coordinati vectora 1+2: " << strelka.getVectorCoord(V_X) << " " << strelka.getVectorCoord(V_Y) << " " << strelka.getVectorCoord(V_Z) << endl;

	system("pause");


}