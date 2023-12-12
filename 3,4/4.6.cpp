#include <iostream>
#include<iomanip>
using namespace std;
void count(const char s[], int counts[])
{
	char letter[27] = "abcdefghijklmnopqrstuvwxyz";
	char bletter[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 900; i++)
	{
		for (int m = 0; m < 27; m++)
		{
			if (s[i] == letter[m] || s[i] == bletter[m])
				counts[m]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << letter[i] << "£º" << counts[i] << " times" << endl;
	}

	
}
char s[900];
int counts[26];
int main()
{
	cout << "Enter a string: ";
	cin.getline(s, 900);
	cout << endl;
	count(s,counts);
	return 0;
}