class Student              //类声明
{
public:                   //公用成员函数原型声明
	Student(int num,const char name[], char sex)
	{
		this->num = num;
		for (int i = 0; i < 4; i++)
		{
			this->name[i] = name[i];
		}
		this->sex = sex;
	}
	Student()
	{
		num = 0;
		for (int i = 0; i < 20; i++)
		{
			this->name[i] = '0';
			if (i == 19)
				this->name[i] = '\0';
		}
		sex = '0';
	}
	void display();
	void set_value(int  num, const char name[], char sex);
private:
	int num;
	char name[20];
	char sex;
};
#pragma once
