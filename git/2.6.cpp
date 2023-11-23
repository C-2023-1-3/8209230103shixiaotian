#include <iostream>
using namespace std;
int main()
{
	int a, b, m;
	cout << "请输入两个数" << endl;
	cin >> a;
	cin >> b;
	m = min(a, b);
	for (; m > 0; m--)
	{
		if ((a % m) == 0 && (b % m) == 0)
		{
			cout <<"最大公约数是" << m << endl;
			break;
		}
	}
	for (int i = 1; (m % b) != 0; i++)
	{
		m = a * i;

	}
	cout <<"最小公倍数是" << m << endl;
	return 0;
}