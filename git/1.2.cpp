#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
	int r, h;
	cout << "输入圆锥底的半径、锥高" << endl;
	cin >> r;
	cin >> h;
	cout << "圆锥的体积是" << (pi * r * r * h) / 3;
	return 0;
}
