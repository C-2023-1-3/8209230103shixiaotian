#include<iostream>
using namespace std;
int main()
{
	float x1=0,x2=0,x3=0;
	for (;1;)
	{
		cout << "�����������ε�������" << endl;
		cin >> x1;
		cin >> x2;
		cin >> x3;
		if (x1 + x2 > x3 && x1 + x3 > x2 && x2 + x3 > x1)
		{
			break;
		}
		cout << "�����������Σ�";
	}
	cout << "�������ε��ܳ�Ϊ" << x1 + x2 + x3 << endl;
	if (x1 == x2 || x2 == x3 || x1 == x3)
		cout << "��������Ϊ����������" << endl;
	else
	{
		cout << "�������β�Ϊ����������" << endl;
	}
	return 0;
}
