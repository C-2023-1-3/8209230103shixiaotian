#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	float x = 0.01;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
	cout << "一个实数x,等于0.01" << endl;
	cout << "output in int type:" << static_cast<int>(x) << endl;
	system("pause");
	return 0;
}