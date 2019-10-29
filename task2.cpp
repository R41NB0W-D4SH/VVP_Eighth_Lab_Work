#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, max, max1, sum;
	cout << "Введите числа A, B и C " << endl;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		if (b > c)
		{
			sum = a + b;
		}
		else
		{
			sum = a + c;
		}
	}
	else if (b >= a && b >= c)
	{
		if (c > a)
		{
			sum = b + c;
		}
		else
		{
			sum = b + a;
		}
	}
	else if (c >= a && c >= b)
	{
		if (a > b)
		{
			sum = c + a;
		}
		else
		{
			sum = c + b;
		}
	}
	cout << "Сумма наибольших двух чисел равна " << sum << endl;

	system("pause");
	return 0;
}
