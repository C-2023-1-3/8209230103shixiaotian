#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	string l;
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0, a2;
	getline(cin, l);
	for (char c : l)
	{
		a2 = 0;
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))//filter letters
		{
			i1++;
			a2++;
		}
		if (c >= 48 && c <= 57)//filter number 
		{
			i2++;
			a2++;
		}
		if (c == 32)//filter sp
		{
			i3++;
			a2++;
		}
		if (a2 == 0)//filter others
			i4++;
	}
	cout << "Ӣ����ĸ��" << i1 << "��" << '\t' << "�ո���" << i3 << "��" << '\t' << "�����ַ���" << i2 << "��" << '\t' << "�����ַ���" << "��" << i4 << endl;
	return 0;
}