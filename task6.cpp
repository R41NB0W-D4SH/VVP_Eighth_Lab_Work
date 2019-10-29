#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	string a1, a2, a3;

	cout << "Введите точку A (от 1 до 999)" << endl;
	cin >> a;

	c = a;
	b = 0;
	a3 = " Это";

	if (a > 0 && a < 1000)
	{
		if (a % 2 == 1)
		{
		a1 = " Нечетное";
		}
		else
		{
		a1 = " Четное";
		}
		while (c != 0)
		{
			c = (c - c % 10) / 10;
			b = b + 1;
		}
		if (b == 1)
		{
		a2 = " одно";
		}
		else if (b == 2)
		{
		a2 = " двух";
		}
		else
		{
		a2 = " трех";
		}

		cout << a << a3 << a1 << a2 << "значное число" << endl;
	}
	else
	{
		cout << "Введите число, следуя условиям задачи! Попробуйте еще раз" << endl;
	}
	
	system("pause");
	return 0;
}
