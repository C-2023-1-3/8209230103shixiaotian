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
	cout << "第一天猴子共摘了" << digui(10,1)<<"个桃子" << endl;
	return 0;
}