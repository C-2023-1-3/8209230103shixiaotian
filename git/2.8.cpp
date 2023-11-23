#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a=-1, n=1, n1;
	for (; a < 0;)
	{
		cout << "请输入a的值(a>=0)" << endl;
		cin >> a;
	}
	n = a;
	n1 = a;
	do
	{
		n = n1;
		n1 = (n + a / n) / 2.0;
		
	} while (fabs(n1-n)>1e-5);

	cout << "a的平方根为" << n1 << endl << "可以使|xn+1 -xn|<10 -10或更小" << endl;
	do
	{
		n = n1;
		n1 = (n + a / n) / 2.0;

	} while (fabs(n1 - n) > 1e-10);
	cout << "a的平方根为" << setprecision(11) << n1;
	return 0;
}