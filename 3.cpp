#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k, a, p;
	cout << "n = ";
	cin >> n;
	if ((n < 1) or (n > 7))
	{
		cout << "��� ������!!!";
		return 0;
	}
	cout << "k = ";
	cin >> k;
	if ((k < 1) or (k > 365))
	{
		cout << "��� ������!!!";
		return 0;
	}
	a = k % 7;
	p = n + a - 1;
	if (p > 7)
	{
		p = p - 7;
	}
	if (p == 1)
	{
		cout << "��� ���� - �����������!";
		return 0;
	}
	if (p == 2)
	{
		cout << "��� ���� - �������!";
		return 0;
	}
	if (p == 3)
	{
		cout << "��� ���� - �����!";
		return 0;
	}
	if (p == 4)
	{
		cout << "��� ���� - �������!";
		return 0;
	}
	if (p == 5)
	{
		cout << "��� ���� - �������!";
		return 0;
	}
	if (p == 6)
	{
		cout << "��� ���� - �������!";
		return 0;
	}
	if (p == 7)
	{
		cout << "��� ���� - �����������!";
		return 0;
	}
}