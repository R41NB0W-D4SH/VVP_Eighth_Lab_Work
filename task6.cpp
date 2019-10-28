int main()
{
	setlocale(0, "");
	int a, x, z;
	string b = "Четное", c = "Нечетное", d = "Одно", e = "Двух", f = "Трех";

	cout << "Введите точку A (от 1 до 999)" << endl;
	cin >> a;

	z = a;
	x = 0;

	if (a > 0 && a < 1000)
	{
		if (a % 2 == 1)
		{
			cout << "Число А равное " << a <<" " << c << " ";
		}
		else
		{
			cout << "Число А равное " << a <<" "<< b << " ";
		}
		while (x != 0)
		{
			z = (z - z % 10) / 10;
			x = x + 1;
		}
		if (x == 1) d;
		else if (x == 2) e;
		else f;
	}
	else
	{
		cout << "Введите число, следуя условиям задачи! Попробуйте еще раз" << endl;
	}

	cout << "значное" << endl;

	system("pause");
	return 0;
}
