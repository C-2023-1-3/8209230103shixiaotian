#include<iostream>
using namespace std;
int main()
{
	float x1=0,x2=0,x3=0;
	for (;1;)
	{
		cout << "请输入三角形的三条边" << endl;
		cin >> x1;
		cin >> x2;
		cin >> x3;
		if (x1 + x2 > x3 && x1 + x3 > x2 && x2 + x3 > x1)
		{
			break;
		}
		cout << "不构成三角形，";
	}
	cout << "该三角形的周长为" << x1 + x2 + x3 << endl;
	if (x1 == x2 || x2 == x3 || x1 == x3)
		cout << "该三角形为等腰三角形" << endl;
	else
	{
		cout << "该三角形不为等腰三角形" << endl;
	}
	return 0;
}
