#include <iostream>
#include "init.h"
using namespace std;

Point::Point(int i, int j) : x(i), y(j)
{


}

/*
This is the same as the constructor on line 5
Point::Point(int i, int j) {
    x = i;
    y = j;
}*/


int Point::getX() const 
{ 
    return x; 
}

int Point::getY() const 
{ 
    return y; 
}

