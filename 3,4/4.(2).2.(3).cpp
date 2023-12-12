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
	cout << "请输入元素个数:";
	cin >> n;
	cout << endl;
	int* ip = new  int[n];
	cout << "请输入数组元素:";
	for (int i = 0; i < n; i++)
	{
		cin >> ip[i];
	}
	cout << endl;
	sort(ip);
	cout << "由小到大排序的数组为: ";
	for (int i=0; i < n; i++)
	{
		cout << *(ip + i) << " ";
	}
	cout << endl;
	delete[] ip;
	return 0;
}