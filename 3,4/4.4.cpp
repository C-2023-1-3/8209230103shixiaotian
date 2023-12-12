#include <iostream>
#include<iomanip>
using namespace std;
int list1[80], list2[80], list3[160];
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, ii = 0;
	for (int iii=0; 1;iii++)
	{
		if (i == size1)//防止数组的下标超出
		{
			for (; ii < size2; ii++, iii++)
			{
				list3[iii] = list2[ii];
			}
			break;
		}
		if (ii == size2)//防止数组的下标超出
		{
			for (; i < size1; i++, iii++)
			{
				list3[iii] = list1[i];
			}
			break;
		}
		if (list1[i] > list2[ii])//排列好两个数组的元素
		{
			list3[iii] = list1[i];
			i++;
		}
		else
		{
			list3[iii] = list2[ii];
			ii++; 
		}
		
	}
}
int main()
{
	int size1,size2;
	
	cout << "Enter list1:" ;//输入第一个数组
	cin >> size1;
	for (int i = 0; i <size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list1: " ;//输入输入第二个数组
	cin >> size2;
	for (int i = 0; i <size2; i++)
	{
		cin >> list1[ i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is" <<" ";
	for (int num = 0; num < size1 + size2; num++)
	{
		cout << list3[num] << " ";
	}
	cout << endl;
	return 0;
}