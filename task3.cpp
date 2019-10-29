#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b, c, min;
	
	cout << "Введите координа трех точек. Сначала A, потом B, затем C" << endl;
	cin >> ax >> bx >> cx;
	cin >> ay >> by >> cy;

	double cd, bd;
	cd = sqrt(pow(cx - ax, 2) + pow(cy - ay, 2));
	bd = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));



	if (bd < cd )
	{
		cout << "Ближайшая точка к A это точка C равная " << c << " и ее расстояние до A равно " << cd << endl;
	}
	else
	{
		cout << "Ближайшая точка к A это точка B равная " << b << " и ее расстояние до A равно " << bd << endl;
	}

	system("pause");
	return 0;
}
