// Fig. 11.18: Fig11_18.cpp
// Driver for simple class Array.
#include <iostream>
using std::cout;
using std::endl;

#include "array.h"

void outputArray( const Array & ); // prototype

int main()
{
    std::cout << "\n=== Test 1: Basic Construction ===\n";
    Array obj1(3);
    cout << "obj1: " << endl;
    outputArray(obj1);
    cout << endl;

    std::cout << "\n=== Test 2: Copy Constructor ===\n";
    Array obj2 = obj1;  // Copy constructor
    cout << "obj2: " << endl;
    outputArray(obj2);
    cout << endl;

    std::cout << "\n=== Test 3: Another Copy Constructor Syntax ===\n";
    Array obj3(obj1);    // Also copy constructor
    cout << "obj3: " << endl;
    outputArray(obj3);
    cout << endl;

    std::cout << "\n=== Test 4: Assignment Operator ===\n";
    Array obj4(4);       // Regular constructor
    cout << "obj4: " << endl;
    outputArray(obj4);
    cout << endl;
    obj4 = obj1;          // Assignment operator
    cout << "obj4: " << endl;
    outputArray(obj4);
    cout << endl;

    std::cout << "\n=== Test 5: Self-Assignment ===\n";
    obj1 = obj1;          // Should handle gracefully
    cout << "obj1: " << endl;
    outputArray(obj1);
    cout << endl;

    std::cout << "\n=== Test 6: Chain Assignment ===\n";
    Array obj5(2), obj6(2);
    cout << "obj5: " << endl;
    outputArray(obj5);
    cout << endl;
    cout << "obj6: " << endl;
    outputArray(obj6);
    cout << endl;
    obj5 = obj6 = obj1;   // Should work right-to-left
    cout << "obj5: " << endl;
    outputArray(obj5);
    cout << endl;
    cout << "obj6: " << endl;
    outputArray(obj6);
    cout << endl;
    return 0;
}  // end main

// print array contents
void outputArray( const Array &arrayToOutput )
{
    cout << "The Array received has " << arrayToOutput.getSize()
       << " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray
