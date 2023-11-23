#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cout << "输入华氏温度" << endl;
	cin >> F;
	F = (F - 32) / 1.8;
	F = (int)(F * 100);
	F = (float)(F / 100.0);
	cout << "对应的摄氏温度为" << F << "度" << endl;
	return 0;
}
