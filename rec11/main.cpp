//Program to demonstrate the template class Array.
#include <iostream>
#include <string>
using namespace std;
/*using std::cin;
using std::cout;
using std::endl;
using std::string;*/

#include "array.h"
#include "array.cpp"

int main( )
{
    Array<int> a(10);

    cout << "Enter up to 10 nonnegative integers.\n";
    cout << "Place a negative number at the end.\n";
    int next;
    cin >> next;
    while ((next >= 0) && (!a.full( )))
    {
        a.addElement(next);
        cin >> next;
    }
    if (next >= 0)
    {
        cout << "Could not read all numbers.\n";
        //Clear the unread input:
        return 0;
    }

    cout << "You entered the following:\n";
    int index;
    int count = a.getNumberUsed( );
    for (index = 0; index < count; index++)
        cout << a[index] << (index!=count-1? ", ": " ");
    cout << endl;

    Array<string> b(3);

    cout << "Enter three words:\n";
    string nextWord;
    for (index = 0; index < 3; index++)
    {
        cin >> nextWord;
        b.addElement(nextWord);
    }

    cout << "You wrote the following:\n";
    count = b.getNumberUsed( );
    for (index = 0; index < count; index++)
        cout << b[index] << (index!=count-1? ", ": " ");
    cout << endl;

    return 0;
}