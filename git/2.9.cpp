#include <iostream>
using namespace std;
int main()
{
	int a=0,t=-1,b=2;
	float q = 0;
	for (; a < 100;t++)
	{
		a += b;
		b += b;
	}
	q = ((a-b/2.0)*0.8) / t;
	cout << q;
	return 0;
}