#include <iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num);
bool is_prime(int num)
{
	for (int i = (num-1); i > 1; i--)
	{
		if ((num % i) == 0)
			return false;
	}
	return true;
}
int main()
{
	int numm[200];
	for (int i = 2,n=-1; 1; i++)//找出前200个素数
	{
		n += is_prime(i);
		if (is_prime(i) == 1)
			numm[n] = i;
		if (n == 199)
			break;
	}
	for (int i = 0; i <= 199; i++)//按每行10个输出
	{
		cout << numm[i] <<"    ";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
	return 0;
}