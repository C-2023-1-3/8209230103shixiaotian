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
			return m;//�����Լ��
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
			n = m;//�����Լ��
			break;
		}
	}
	for (int i = 1; (m % b) != 0; i++)
	{
		m = a * i;//����С������

	}
	a = n;
	b = m;
}
int main()
{
	int a, b;
	cout << "������������" << endl;
	cin >> a;
	cin >> b;
	cout << "(1)���Լ����" << test1(a, b) << endl;
	if (min(a, b) == 0)
	{
		cout << "(2)���Լ����" << 0 << endl;
		cout << "(2)��С������û��" << endl;
	}
	else
	{
		test2(a, b);
		cout << "(2)���Լ����" << a << endl;
		cout << "(2)��С��������" << b << endl;
	}
	return 0;
}