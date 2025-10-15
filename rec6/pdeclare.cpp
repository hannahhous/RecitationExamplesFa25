#include <iostream>
using namespace std;

int main()
{


    int * ptr1, *ptr2;		// two pointers to int
    double * dptr;		// a pointer to double

    cout << "The value of ptr1 = " << ptr1 << '\n';
    cout << "The value of ptr2 = " << ptr2 << '\n';
    cout << "The value of dptr = " << dptr << '\n';

    // DANGEROUS!  We are de-referencing uninitialized pointers
    cout << "*ptr1 = " << *ptr1 << '\n';
    cout << "*ptr2 = " << *ptr2 << '\n';
    cout << "*dptr = " << *dptr << '\n';

    return 0;
}