#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, max;
	cout << "Введите переменные A и B " << endl;
	cin >> a >> b;

	if (a != b)
	{
		max = a > b ? a : b;
		a = max;
		b = max;
	}
	else
	{
		a = 0;
		b = 0;
	}

	cout << "A равно " << a << ", B равно " << b << endl;

	system("pause");
	return 0;
}
