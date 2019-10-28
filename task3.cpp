#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b, c, min;
	
	cout << "Введите координа трех точек. Сначала A, потом B, затем C" << endl;
	cin >> a >> b >> c;

	if (abs(a - c) < abs(a - b))
	{
		cout << "Ближайшая точка к A это точка C равная " << c << " и ее расстояние до A равно " << abs(a - c) << endl;
	}
	else
	{
		cout << "Ближайшая точка к A это точка B равная " << b << " и ее расстояние до A равно " << abs(a - b) << endl;
	}

	system("pause");
	return 0;
}
