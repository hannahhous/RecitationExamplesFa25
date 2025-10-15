#include <iostream>
using namespace std;
void SquareByAddress(int * ptr)
{
    *ptr = (*ptr) * (*ptr);  // Modifies original variable
}



int main() {
    int num = 4;
    cout << "Before: " << num << '\n';  // 4
    
    SquareByAddress(&num);              // Pass address of num
    
    cout << "After: " << num << '\n';   // 16 - original changed!
}
