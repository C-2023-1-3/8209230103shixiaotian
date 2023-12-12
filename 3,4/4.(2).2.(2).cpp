#include <iostream>
#include<iomanip>
using namespace std;
int parseHex(const char* const hexString)
{
	int num = 0,x=0;
	for (int i = 0; i < 20; i++)
	{
		if (*(hexString + i) == '\0')
		{
			num = i;
			break;
		}
	}
	char letter[7] = "ABCDEF";
	for (int i = num; i > 0; i--)
	{
		for (int ii = 0,sum=1; ii < 10; ii++)
		{
			if (*(hexString + i - 1) == (ii+48))
			{
				for (int turn = num-i; turn > 0; turn--)
					sum *= 16;
				x += (sum * ii);
			}
		}
		for (int ii = 0, sum = 1; ii < 6; ii++)
		{
			if (*(hexString + i - 1) == letter[ii])
			{
				for (int turn = num - i; turn > 0; turn--)
					sum *= 16;
				x += sum * (ii+10);
			}
		}
	}
	return x;
}
int main()
{
	char hexString[20];
	cout << "请输入16进制数:";
	cin >> hexString;
	cout << endl;
	cout << "对应的10进制数为: " << parseHex(hexString) << endl;
	return 0;
}