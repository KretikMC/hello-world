#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int yr, cnt;
	cout << "������� ���: ";
	cin >> yr;
	yr = yr - 1;
	if (yr < 0)
	{
		cnt = abs(yr / 100 - 1);
		cout << "��������: " << cnt << "(�� �. �)";
	}
	else
	{
		cnt = yr / 100;
		cout << "��������: " << cnt;
	}
}
