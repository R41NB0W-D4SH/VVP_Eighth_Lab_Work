#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	
	cout << "Введите точку A" << endl;
	cin >> a;

	if (a == 0)
	{
	cout << "Число A равное " << a << " является нулевым числом" << endl;
	}
	else if (abs(a % 2) == 0)
	{
		if (a < 0)
		{
			cout << "Число A равное " << a << " является отрицательным четным числом" << endl;
		}
		
		if (a > 0)
		{
			cout << "Число A равное " << a << " является положительным четным числом" << endl;
		}
	}
	else if (abs(a % 2) == 1)
	{
		if (a < 0)
		{
			cout << "Число A равное " << a << " является отрицательным нечетным числом" << endl;
		}

		if (a > 0)
		{
			cout << "Число A равное " << a << " является положительным нечетным числом" << endl;
		}
	}

	system("pause");
	return 0;
}
