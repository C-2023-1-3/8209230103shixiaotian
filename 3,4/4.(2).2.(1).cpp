#include <iostream>
#include<iomanip>
using namespace std;
int num1 = 10, num2 = 160;
int indexof(const char* s1, const char* s2)
{
	for (int i2 = 0, i1 = 0; i2 <= (num2 - num1); i2++)
	{
		if (s1[i1] == s2[i2])
		{
			i1++;
			if (i1 == num1)
			{
				return (i2 - i1 + 1);
			}
		}
	}
	return -1;
}
char s1[10];
char s2[160];
int main()
{
	cout << "Enter the first string:";
	cin.getline(s1, 10);
	cout << endl;
	cout << "Enter the second string: ";
	cin.getline(s2, 160);
	cout << endl;
	cout << "indexof(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is  " << indexof(s1, s2);
	cout << endl;
	return 0;
}