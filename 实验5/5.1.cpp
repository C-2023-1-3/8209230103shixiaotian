#include<iostream>
using namespace std;
class Time             // ����Time��
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
private:            // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	int hour, minute, sec;               //�����趨��ʱ�� 
	cout << "������ʱ���֣���" << endl;
	cin >> hour;
	cin >> minute;
	cin >> sec;
	Time t1;           //����t1ΪTime�����  
	t1.tcin(hour, minute, sec);
	t1.show();
	return 0;
}
