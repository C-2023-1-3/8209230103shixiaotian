#include <iostream>
#include<iomanip>
using namespace std;
int n = 0;
void sort(int mm[])
{
	for (int i = 0, l = 0; i < n-1; i++)
	{
		if (i == 0 && mm[i] > mm[i + 1])
		{
			l = mm[i];
			mm[i] = mm[i + 1];
			mm[i + 1] = l;
			continue;
		}

		if (mm[i] > mm[i + 1])
		{
			l = mm[i];
			mm[i] = mm[i + 1];
			mm[i + 1] = l;
			i = i - 2;
		}

	}
}
int main()
{
	cout << "������Ԫ�ظ���:";
	cin >> n;
	cout << endl;
	int* ip = new  int[n];
	cout << "����������Ԫ��:";
	for (int i = 0; i < n; i++)
	{
		cin >> ip[i];
	}
	cout << endl;
	sort(ip);
	cout << "��С�������������Ϊ: ";
	for (int i=0; i < n; i++)
	{
		cout << *(ip + i) << " ";
	}
	cout << endl;
	delete[] ip;
	return 0;
}