#include <iostream>
#include<iomanip>
using namespace std;
int a[10];
int main()
{
	int x = 1;
	cout << "Enter ten numbers: " << endl;
	cin >> a[0];
	for (int i = 0,ii=0, m = 0; i < 9; i++,x++)
	{
		cin >> m;
		for (int b = i; b >= 0; b--)
		{
			if (m == a[b])//如果一个数出现多次，只打印一次
			{
				ii =1;
				x--;
				break;
			}
		}
		if (ii == 0)
			a[x] = m;
		ii == 0;
	}
	cout << "The distinct numbers are :";
	for (int i=0; x > 0; x--,i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}