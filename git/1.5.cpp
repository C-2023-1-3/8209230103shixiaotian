#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cout << "���뻪���¶�" << endl;
	cin >> F;
	F = (F - 32) / 1.8;
	F = (int)(F * 100);
	F = (float)(F / 100.0);
	cout << "��Ӧ�������¶�Ϊ" << F << "��" << endl;
	return 0;
}
