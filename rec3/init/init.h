#include <iostream>
using namespace std;

class Point {
private:
	const int x;
	const int y;

public:
	Point(int i = 0, int j = 0);


	int getX() const; 
	int getY() const; 
};