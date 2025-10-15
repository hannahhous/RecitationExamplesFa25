// file to demonstrate arrays and pointers

#include <iostream>
using namespace std;

int main()
{
    // creation of array
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int i;
    int * ptr;

    cout << "\nAddress of array arr = " << arr << '\n';

    for (i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "]:  Value = " << arr[i]
                 << "\tAddress = " << &(arr[i]) << '\n';
    }

    cout << "\nAssigning:  ptr = arr; \n";
    ptr = arr;				// arr acts as a pointer

    cout << "\n";
    cout << "arr[0] = " << arr[0] << '\n';
    cout << "ptr[0] = " << ptr[0] << '\n';
    cout << "*arr = " << *arr << '\n';
    cout << "*ptr = " << *ptr << "\n\n";

    cout << "arr[6] = " << arr[6] << '\n';
    cout << "ptr[6] = " << ptr[6] << '\n';
    cout << "*(arr + 6) = " << *(arr + 6) << '\n';
    cout << "*(ptr + 6) = " << *(ptr + 6) << '\n';

    cout << "\nIncrementing ptr twice\n";
    ptr++;
    ptr++;

    cout << "\n";
    cout << "arr[0] = " << arr[0] << '\n';
    cout << "ptr[0] = " << ptr[0] << '\n';
    cout << "*arr = " << *arr << '\n';
    cout << "*ptr = " << *ptr << "\n\n";

    cout << "arr[6] = " << arr[6] << '\n';
    cout << "ptr[6] = " << ptr[6] << '\n';
    cout << "*(arr + 6) = " << *(arr + 6) << '\n';
    cout << "*(ptr + 6) = " << *(ptr + 6) << '\n';

}
