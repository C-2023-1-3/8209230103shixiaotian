#include<iostream>
using namespace std;
class ti
{
public:
	ti()
	{
		cout << "请输入长方体的长，宽，高:";
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void show()
	{
		int n = height * width * length;
		cout << "长方柱的体积为" << n << endl;
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

