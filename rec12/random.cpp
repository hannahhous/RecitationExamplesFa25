// Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21...
// Each number is sum of previous two

int fibonacci(int n) {
    if (n == 0)           // Base case 1
        return 0;
    else if (n == 1)      // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Call trace for fibonacci(4):
//                    fib(4)
//                   /      \
//              fib(3)      fib(2)
//              /    \      /    \
//          fib(2) fib(1) fib(1) fib(0)
//          /   \
//      fib(1) fib(0)
// Result: 3
















#include <iostream>
#include <stdexcept>
using namespace std;

// Custom exception class
class DivideByZeroException : public runtime_error {
public:
    DivideByZeroException()
        : runtime_error("Attempted to divide by zero") {}
};

double divide(int num, int denom) {
    if (denom == 0) {
        throw DivideByZeroException();  // Throw custom exception
    }
    return static_cast<double>(num) / denom;
}

int main() {
    try {
        cout << divide(10, 2) << endl;   // Works fine
        cout << divide(10, 0) << endl;   // Throws exception
        cout << "This won't print" << endl;
    }
    catch (DivideByZeroException& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    catch (exception& e) {  // Catch other standard exceptions
        cout << "Other exception: " << e.what() << endl;
    }
    catch (...) {  // Catch-all for any other exceptions
        cout << "Unknown exception occurred" << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}










// fraction.h
#ifndef FRACTION_H    // If FRACTION_H not defined
#define FRACTION_H    // Define it now

class Fraction {
    // Class definition here
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d);
    // ... more members
};

#endif  // End of conditional compilation


// the first time fraction.h is included it will get compiled
// the second time it will skip it because everything in it is already defined














