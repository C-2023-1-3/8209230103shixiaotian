#include<iostream>
using namespace std;
int main()
{
	char qi;
	float a=0, b=0;
	int m = 0;
	for (; 1;)
	{
		cout << "��ѡ�����㷽ʽ��+��-��*��%��/" << endl;
		a = 0;
		b = 0;
		cin >> qi;
		if (qi == '+')
		{
			cout << "���мӷ�����" << endl << "������������" << endl;
			cin >> a >> b;
			cout << "���Ϊ" << a + b << endl;

		}
		if (qi == '-')
		{
			cout << "���м�������" << endl << "������������" << endl;
			cin >> a >> b;
			cout << "���Ϊ" << a - b << endl;

		}
		if (qi == '*')
		{
			cout << "���г˷�����" << endl << "������������" << endl;
			cin >> a >> b;
			cout << "���Ϊ" << a * b << endl;

		}
		if (qi == '/')
		{
			for (; b <= 0;)
			{
				cout << "���г�������" << endl << "����������������һ������Ϊ��" << endl;
				cin >> a >> b;
			}
			cout << "���Ϊ" << a / b << endl;

		}
		if (qi == '%')
		{
			int x, y=0;
			for (; y <= 0;)
			{
				cout << "����ȡ������" << endl << "������������" << endl;
				cin >> x >> y;
				cout << "���Ϊ" << (x % y) << endl;
			}

		}
		cout << "����1���˳��������������֣�����" << endl;
		cin >> m;
		if (m == 1)
			break;
	}
	return 0;
}
