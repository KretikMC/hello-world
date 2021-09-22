#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, sum, subt, multi, divi;
	cout << "Первое число: ";
	cin >> a;
	if (a == 0)
	{
		cout << "Неверное значение!";
		return 0;
	}
	if (a < 0)
	{
		a = a * -1;
	}
	cout << "Второе число: ";
	cin >> b;
	if (b == 0)
	{
		cout << "Неверное значение!";
		return 0;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	sum = a + b;
	subt = a - b;
	multi = a * b;
	divi = a / b;
	cout << "Сумма квадратов = " << sum << '\n' << "Разность квадратов = " << subt << '\n' << "Произведение квадратов = " << multi << '\n' << "Частное квадратов = " << divi;
}
