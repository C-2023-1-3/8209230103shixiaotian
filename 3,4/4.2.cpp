#include <iostream>
#include<iomanip>
using namespace std;
void sort(double list[])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <  9; j++)//“冒泡”最多listSize – 1次
			if (list[j] > list[j + 1])
			{
				int t = list[j];
				list[j]=  list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);
}
int main()
{
	double list[10];
	cout << "请输入10个双精度数字：";
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	sort(list);
	cout << "排列后的数字为";
	for (int i = 0; i < 10; i++)
	{
		cout<< list[i]<<" ";
	}
	return 0;
}