#include <iostream>
using namespace std;
int main()
{
	int a, b, m;
	cout << "������������" << endl;
	cin >> a;
	cin >> b;
	m = min(a, b);
	for (; m > 0; m--)
	{
		if ((a % m) == 0 && (b % m) == 0)
		{
			cout <<"���Լ����" << m << endl;
			break;
		}
	}
	for (int i = 1; (m % b) != 0; i++)
	{
		m = a * i;

	}
	cout <<"��С��������" << m << endl;
	return 0;
}