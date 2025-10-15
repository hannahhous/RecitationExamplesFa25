#include <iostream>
#include "init.h"
using namespace std;

int main()
{
	Point t1(10, 15);
	cout << "x = " << t1.getX() << ", ";
	cout << "y = " << t1.getY() << endl;
	return 0;
}