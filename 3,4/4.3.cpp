#include <iostream>
#include<iomanip>
using namespace std;
bool zzz[100];
void xue(int i)
{
	for (int m = 1; m <= 100; m++)//Ln��ÿ��n���ı�״̬
	{
		if (((m + 1) % (i + 1)) == 0)
			zzz[m - 1] = (1 - zzz[m - 1]);
	}
}
int main()
{
	for (int i = 0; i < 100; i++)//��һ��ѧ��
	{
		zzz[i] = (1 - zzz[i]);
	}
	for (int i = 2; i <= 100; i++)//�ڶ���ѧ������һ�ٸ�ѧ��
	{
		xue(i);
	}
	for (int i = 0; i < 100; i++)//��ʾ���п��ŵĹ��Ӻ��룬����֮����һ���ո����
	{
		if (zzz[i] == 1)
			cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}