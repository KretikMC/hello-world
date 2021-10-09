#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int yr, cnt;
	cout << "Введите год: ";
	cin >> yr;
	yr = yr - 1;
	if (yr < 0)
	{
		cnt = abs(yr / 100 - 1);
		cout << "Столетие: " << cnt << "(до н. э)";
	}
	else
	{
		cnt = yr / 100;
		cout << "Столетие: " << cnt;
	}
}
