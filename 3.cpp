#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, avrg;
	cout << "Первое число: ";
	cin >> a;
	cout << "Второе число: ";
	cin >> b;
	avrg = (a + b) / 2;
	cout << "Среднее арифметическое = " << avrg;
}
