#include <iostream>
#include<iomanip>
using namespace std;
int digui(int a,int i)
{
	i = (i + 1) * 2;
	a -= 1;
	if(a!=1)
	i = digui(a, i);
	return i;
}
int main()
{
	cout << "��һ����ӹ�ժ��" << digui(10,1)<<"������" << endl;
	return 0;
}