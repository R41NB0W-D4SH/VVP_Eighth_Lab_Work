#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, max, max1, sum;
	cout << "Введите числа A, B и C " << endl;
	cin >> a >> b >> c;

	max = a > b ? a : b;
	max1 = c > b ? c : b;
	sum = max + max1;

	cout << "Сумма наибольших двух чисел равна " << sum << endl;

	system("pause");
	return 0;
}
