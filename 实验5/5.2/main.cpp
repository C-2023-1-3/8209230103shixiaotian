#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student stud1(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	stud.set_value(007, "yfguuyh", 'u');
	stud.display();
	return 0;
}
