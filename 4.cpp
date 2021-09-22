#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, sum, subt, multi, divi, aa, bb;
	cout << "Первое число: ";
	cin >> a;
	if (a == 0)
	{
		cout << "Неверное значение!";
		return 0;
	}
	cout << "Второе число: ";
	cin >> b;
	if (b == 0)
	{
		cout << "Неверное значение!";
		return 0;
	}
	aa = a * a;
	bb = b * b;
	sum = aa + bb;
	subt = aa - bb;
	multi = aa * bb;
	divi = aa / bb;
	cout << "Сумма квадратов = " << sum << '\n' << "Разность квадратов = " << subt << '\n' << "Произведение квадратов = " << multi << '\n' << "Частное квадратов = " << divi;
}


