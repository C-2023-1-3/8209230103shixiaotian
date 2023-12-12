#include <iostream>
#include<iomanip>
using namespace std;
bool zzz[100];
void xue(int i)
{
	for (int m = 1; m <= 100; m++)//Ln，每隔n个改变状态
	{
		if (((m + 1) % (i + 1)) == 0)
			zzz[m - 1] = (1 - zzz[m - 1]);
	}
}
int main()
{
	for (int i = 0; i < 100; i++)//第一个学生
	{
		zzz[i] = (1 - zzz[i]);
	}
	for (int i = 2; i <= 100; i++)//第二个学生到第一百个学生
	{
		xue(i);
	}
	for (int i = 0; i < 100; i++)//显示所有开着的柜子号码，号码之间用一个空格隔开
	{
		if (zzz[i] == 1)
			cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}