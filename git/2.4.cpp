#include<iostream>
using namespace std;
int main()
{
	char qi;
	float a=0, b=0;
	int m = 0;
	for (; 1;)
	{
		cout << "请选择运算方式：+，-，*，%，/" << endl;
		a = 0;
		b = 0;
		cin >> qi;
		if (qi == '+')
		{
			cout << "进行加法运算" << endl << "请输入两个数" << endl;
			cin >> a >> b;
			cout << "结果为" << a + b << endl;

		}
		if (qi == '-')
		{
			cout << "进行减法运算" << endl << "请输入两个数" << endl;
			cin >> a >> b;
			cout << "结果为" << a - b << endl;

		}
		if (qi == '*')
		{
			cout << "进行乘法运算" << endl << "请输入两个数" << endl;
			cin >> a >> b;
			cout << "结果为" << a * b << endl;

		}
		if (qi == '/')
		{
			for (; b <= 0;)
			{
				cout << "进行除法运算" << endl << "请输入两个数，后一个数不为零" << endl;
				cin >> a >> b;
			}
			cout << "结果为" << a / b << endl;

		}
		if (qi == '%')
		{
			int x, y=0;
			for (; y <= 0;)
			{
				cout << "进行取余运算" << endl << "请输入两个数" << endl;
				cin >> x >> y;
				cout << "结果为" << (x % y) << endl;
			}

		}
		cout << "输入1，退出；输入任意数字，继续" << endl;
		cin >> m;
		if (m == 1)
			break;
	}
	return 0;
}
