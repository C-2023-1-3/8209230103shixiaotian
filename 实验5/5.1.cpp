#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void tcin(int hour,int minute,int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:            // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	int hour, minute, sec;               //输入设定的时间 
	cout << "请输入时，分，秒" << endl;
	cin >> hour;
	cin >> minute;
	cin >> sec;
	Time t1;           //定义t1为Time类对象  
	t1.tcin(hour, minute, sec);
	t1.show();
	return 0;
}
