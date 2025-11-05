#include <iostream>
#include <string>
#include "shape.h"

using namespace std;

int main()
{
   Circle c1;			// default constructor
   Circle c2(10,20,100);	// constructor with 3 params
   Circle c3("red", 4, -1, 30); // constructor with 4 params

   cout << "c1 ";
   c1.Print();
   cout << "\nc2 ";
   c2.Print();
   cout << "\nc3 ";
   c3.Print();

   cout << '\n';
   cout << "c1's area = " << c1.Area() << '\n';
   cout << "c2's area = " << c2.Area() << '\n';
   cout << "c3's area = " << c3.Area() << '\n';

   c1.SetColor("purple");
   c1.SetRadius(5);
   c2.SetColor("orange");
   c2.SetCenter(40,25);

   cout << "\nc1 ";
   c1.Print();
   cout << "\nc2 ";
   c2.Print();
   cout << '\n';

   //  Now testing Rectangles

   Rectangle r1;			// default constructor
   Rectangle r2(5, 10, 100, 200);	// cosntructor with params
   Rectangle r3("mauve", -5, -20, 50, 40);  // constructor with 5 params

   cout << "r1 ";
   r1.Print();
   cout << "\nr2 ";
   r2.Print();
   cout << "\nr3 ";
   r3.Print();

   cout << '\n';
   cout << "r1's area = " << r1.Area() << '\n';
   cout << "r2's area = " << r2.Area() << '\n';
   cout << "r3's area = " << r3.Area() << '\n';

   r1.SetColor("yellow");
   r1.SetOrigin(1,3);
   r2.SetColor("invisible");
   r2.SetDimensions(200,250);

   cout << "\nr1 ";
   r1.Print();
   cout << "\nr2 ";
   r2.Print();
   cout << '\n';
}