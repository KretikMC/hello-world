#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, num, s;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	num = (a / c) * (b / c);
	cout << "На прямоугольнике можно разместить" << " " << num << " " << "квадратов" << '\n';
	s = a * b - num * pow(c, 2);
	cout << "Незанятая площадь прямоугольника = " << s;

}
