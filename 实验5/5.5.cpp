#include<iostream>
using namespace std;
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << '(' << x << ',' << y << ')' << endl;
	}
private:
	int x;
	int y;
};
int main()
{
	Point dot(60, 80);
	int i=0, j=0;
	cout << "ÇëÊäÈëi£¬j" << endl;
	cin >> i;
	cin >> j;
	dot.setPoint(i, j);
	dot.display();
	return 0;
}

