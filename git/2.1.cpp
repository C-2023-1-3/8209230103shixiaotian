#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char x;
	cout << "ÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> x;
	if (96 < int(x) && int(x) < 123)
	{
		cout << char(x - 32);
	}
	else
	{
		cout << x + 1 << endl;
	}
	return 0;
}
