#include <iostream>
#include "student.h"           //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
	cout << "num��" << num << endl;
	cout << "name��" << name << endl;
	cout << "sex��" << sex << endl;
}
void Student::set_value(int  num, const char name[], char sex)
{
	this->num = num;
	for (int i = 0; i < 20; i++)
	{
		this->name[i] = name[i];
	}
	this->sex = sex;
}
