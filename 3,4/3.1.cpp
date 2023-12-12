#include <iostream>
#include<iomanip>
using namespace std;
int test1(int a, int b)
{
	int m;

	m = min(a, b);
	if (m == 0)
		return 0;
	for (; m > 0; m--)
	{
		if ((a % m) == 0 && (b % m) == 0)
		{
			return m;//求最大公约数
		}
	}
}
void test2(int& a, int& b)
{
	int n(1), m;
	m = min(a, b);
	for (; m > 0; m--)
	{
		if ((a % m) == 0 && (b % m) == 0)
		{
			n = m;//求最大公约数
			break;
		}
	}
	for (int i = 1; (m % b) != 0; i++)
	{
		m = a * i;//求最小公倍数

	}
	a = n;
	b = m;
}
int main()
{
	int a, b;
	cout << "请输入两个数" << endl;
	cin >> a;
	cin >> b;
	cout << "(1)最大公约数是" << test1(a, b) << endl;
	if (min(a, b) == 0)
	{
		cout << "(2)最大公约数是" << 0 << endl;
		cout << "(2)最小公倍数没有" << endl;
	}
	else
	{
		test2(a, b);
		cout << "(2)最大公约数是" << a << endl;
		cout << "(2)最小公倍数是" << b << endl;
	}
	return 0;
}