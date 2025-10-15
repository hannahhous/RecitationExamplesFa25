// illustrates pointer initializations, using address-of operator
//  and copying pointers to other pointers of the same type

#include <iostream>
using namespace std;

int main()
{
    int * ip1, * ip2;
    double * dp1, * dp2;
    char * cp1, * cp2;

    int x = 5;
    double a = 1.1;
    char ch = '$';

    ip2 = &x;		// legal, attaches ip2 to x
    dp2 = &a;		// legal, attaches dp2 to a
    cp2 = &ch;		// legal, attaches cp2 to ch

    cout << "ip2 = " << ip2 << "\t &x = " << &x << '\n';
    cout << "dp2 = " << dp2 << "\t &a = " << &a << '\n';
    cout << "cp2 = " << cp2 << "\t &ch = " << &ch << '\n';
    cout << "cp2 = " << reinterpret_cast<void*>(cp2) << "\t &ch = "
     << reinterpret_cast<void* >(&ch) << "\n\n";

    // cast operation converts char* to void* for printing addresses

    cout << "*ip2 = " << *ip2 << "\t x = " << x << '\n';
    cout << "*dp2 = " << *dp2 << "\t a = " << a << '\n';
    cout << "*cp2 = " << *cp2 << "\t ch = " << ch << "\n\n";

    ip1 = ip2;		// legal, assignment of same type
    dp1 = dp2;		// legal
    cp1 = cp2;		// legal

    cout << "ip1 points to " << *ip1 << '\n';
    cout << "dp1 points to " << *dp1 << '\n';
    cout << "cp1 points to " << *cp1 << "\n\n";

    // ATTEMPTING ILLEGAL OPERATIONS -- uncomment this block to see the
    //                                  compile errors
    /*
       ip1 = cp1;		// trying to assign char* to an int*
       dp1 = ip1;		// trying to assign int* to a double*
       cp1 = &a;		// trying to assign address of a double to a char*
    */
    // assignment of different pointer types with a cast operation:

    // pointing dp1 at the integer x, and pointing ip1 at the double 'a'

    dp1 = reinterpret_cast<double* >(ip2);
    ip1 = reinterpret_cast<int* >(dp2);

    cout << "ip1 points to " << *ip1 << '\n';
    cout << "dp1 points to " << *dp1 << '\n';


    cout << "\nip2 = " << ip2 << '\n';
    cout << "&*ip2 = " << &*ip2 << "\n\n";

    cout << "x = " << x << '\n';
    cout << "*&x = " << *&x << '\n';

    return 0;
}