#include<iostream>
using namespace std;
class Student
{
public:
	Student(string number, int score)
	{
		this->number = number;
		this->score = score;
	}
	void max(Student* ip)
	{
		int n, m;
		n = (ip->score > (ip + 1)->score)?0:1;
		n = ((ip+n)->score > (ip + 2)->score) ? n : 2;
		n = ((ip + n)->score > (ip + 3)->score) ? n : 3;
		n = ((ip + n)->score > (ip + 4)->score) ? n : 4;
		n = ((ip + n)->score > (ip + 5)->score) ? n : 5;
		cout << "5个学生的最高成绩者的学号为" << (ip + n)->number << endl;
	}
private:
	string number;
	int score;
};
int main()
{
	Student five[5] = { Student("000001",374), Student("000002",344), Student("000003",364), Student("000004",304), Student("000005",244)};
	five->max(five);
	return 0;
}

