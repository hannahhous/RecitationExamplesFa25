#include <iostream>
using namespace std;

int main()
{
    int * ptr;			// a pointer

    cout << "The value of ptr = " << ptr << '\n';
    cout << "Now initializing ptr to null pointer\n";

    ptr = 0;

    cout << "The value of ptr = " << ptr << '\n';

    if (ptr == 0)
        cout << "Pointer unsafe to de-reference\n";
    else
        cout << "Pointer safe to de-reference\n";

    cout << "Attempting to dereference ptr\n";
    cout << "*ptr = " << *ptr << '\n';

    return 0;
}


