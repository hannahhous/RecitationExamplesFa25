#include <iostream>
using namespace std;

int main() {
    cout << "enter a number: ";
    double number = 0;
    char digit;
    
    // whitespace
    while (isspace(cin.peek())) {
        cin.get();
    }
    
    while (isdigit(cin.peek())) {
        digit = cin.get();
        //cin.get(digit);
        cout << "digit: " << digit << endl;
        number = number * 10 + (digit-'0');
    }

    // for endl
    cin.ignore();

    cout << "Number: " << number << endl;

    cout << "Enter a sentence: ";
    char ch = cin.peek();
    cout << "peek char: " << ch << endl;
    ch = cin.peek();
    cout << "peek char: " << ch << endl;
    
    ch = (char)cin.get();
    cout << "get char: " << ch << endl;
    ch = (char)cin.get();
    cout << "get char: " << ch << endl;
    ch = (char)cin.get();
    cout << "get char: " << ch << endl;
    ch = (char)cin.get();
    cout << "get char: " << ch << endl;
    ch = (char)cin.get();
    cout << "get char: " << ch << endl;
}