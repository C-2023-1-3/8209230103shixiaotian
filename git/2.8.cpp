#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a=-1, n=1, n1;
	for (; a < 0;)
	{
		cout << "������a��ֵ(a>=0)" << endl;
		cin >> a;
	}
	n = a;
	n1 = a;
	do
	{
		n = n1;
		n1 = (n + a / n) / 2.0;
		
	} while (fabs(n1-n)>1e-5);

	cout << "a��ƽ����Ϊ" << n1 << endl << "����ʹ|xn+1 -xn|<10 -10���С" << endl;
	do
	{
		n = n1;
		n1 = (n + a / n) / 2.0;

	} while (fabs(n1 - n) > 1e-10);
	cout << "a��ƽ����Ϊ" << setprecision(11) << n1;
	return 0;
}