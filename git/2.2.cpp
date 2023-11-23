#include<iostream>
using namespace std;
int main()
{
	float x=0;
	for (; x <= 0||x>=10;)
	{
		cout << "0<x<10" << endl;
		cout << "ÇëÊäÈëx" << endl;
		cin >> x;
	}
	if (x <1)
	{
		cout << "y=" << (3 - 2 * x) << endl;
	}
	else
	{
		if (x < 5)
		{
			cout << "y=" << (1+2/(x*4)) << endl;
		}
		else
		{
			cout << "y=" << x * x << endl;
		}
	}
	return 0;
}
