#include <iostream>
using namespace std;
int main()
{
	int n = 1;
	for (; n < 6; n++)
	{
		for (int i = 1; i < n + 1; i++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}