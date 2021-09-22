#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int l, d, pi;
	const pi = 3, 14;
	cout << "Диаметр: ";
	cin >> d;

	l = pi * d;
	cout << "Длина окружности = " << l;
}