#include <iostream>
#include<iomanip>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c;
	for (bool boo=0;1;)
	{
		cout << "请输入三角形三边长" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		boo = is_valid(a, b, c);
		if (boo == 1)
			break;
		cout << "输入不合法" << endl;
	}
	cout << "三角形面积为"<<area(a,b,c) << endl;
	return 0;
}