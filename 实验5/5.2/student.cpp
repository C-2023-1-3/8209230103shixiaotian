#include <iostream>
#include "student.h"           //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
	cout << "num：" << num << endl;
	cout << "name：" << name << endl;
	cout << "sex：" << sex << endl;
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
