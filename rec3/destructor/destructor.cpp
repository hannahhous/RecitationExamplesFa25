// test class to illustrate constructors and destructors

#include <iostream>
#include "destructor.h"

using namespace std;

// member function definitions

Thing::Thing()
{
   data = 0;
   cout << "Running default constructor: data = " << data << '\n';

}

Thing::Thing(int x)
{
   data = x;
   cout << "Running constructor (with parameter): data = " << data << '\n';
}

Thing::~Thing()
{
   cout << "Running destructor: data = " << data << '\n';
}


/*
constructor with actual data:
Wall(double len, double hgt)
{
   length = new double(len);
   height = new double(hgt);
}
destructor with actual data:
~Wall() {
   delete length;
   delete height;
}
*/