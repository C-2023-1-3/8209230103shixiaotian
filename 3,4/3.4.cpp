#include <iostream>
#include<iomanip>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c;
	for (bool boo=0;1;)
	{
		cout << "���������������߳�" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		boo = is_valid(a, b, c);
		if (boo == 1)
			break;
		cout << "���벻�Ϸ�" << endl;
	}
	cout << "���������Ϊ"<<area(a,b,c) << endl;
	return 0;
}