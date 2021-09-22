#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, s, p;
	cout << "Длина: ";
	cin >> a;
	cout << "Ширина: ";
	cin >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "Площадь прямоугольника = " << s << "Периметр прямоугольника = " << p;
}
