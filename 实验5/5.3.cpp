#include<iostream>
using namespace std;
class ti
{
public:
	ti()
	{
		cout << "�����볤����ĳ�������:";
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void show()
	{
		int n = height * width * length;
		cout << "�����������Ϊ" << n << endl;
	}
private:
	int height;
	int width;
	int length;
};
int main()
{
	ti t1;
	ti t2;
	ti t3;
	t1.show();
	t2.show();
	t3.show();
	return 0;
}

