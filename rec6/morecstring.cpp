#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // ============================================================
    // SETUP: Create some strings to work with
    // ============================================================
    char firstName[20] = "John";
    char lastName[20] = "Smith";
    char fullName[50];
    char greeting[100] = "Hello, ";
    char message[100];
    char original[30] = "Programming";
    char copy[30];

    cout << "=== C-STRING FUNCTION EXAMPLES ===\n\n";


    // ============================================================
    // strlen() - Get the length of a string
    // ============================================================
    cout << "--- strlen() ---\n";
    cout << "firstName: \"" << firstName << "\"\n";
    cout << "Length: " << strlen(firstName) << " characters\n";
    // Output: Length: 4 characters

    cout << "\nlastName: \"" << lastName << "\"\n";
    cout << "Length: " << strlen(lastName) << " characters\n";
    // Output: Length: 5 characters


    // ============================================================
    // strcpy() - Copy one string to another
    // ============================================================
    cout << "\n--- strcpy() ---\n";
    cout << "Before: copy = \"" << copy << "\" (garbage)\n";

    strcpy(copy, original);
    cout << "After strcpy(copy, original):\n";
    cout << "copy = \"" << copy << "\"\n";
    // Output: copy = "Programming"

    strcpy(message, "Welcome to C++");
    cout << "After strcpy(message, \"Welcome to C++\"):\n";
    cout << "message = \"" << message << "\"\n";
    // Output: message = "Welcome to C++"


    // ============================================================
    // strcat() - Concatenate (join) strings
    // ============================================================
    cout << "\n--- strcat() ---\n";
    cout << "Starting with: fullName = \"\" (empty)\n";

    strcpy(fullName, firstName);
    cout << "After strcpy(fullName, firstName): \"" << fullName << "\"\n";
    // Output: "John"

    strcat(fullName, " ");
    cout << "After strcat(fullName, \" \"): \"" << fullName << "\"\n";
    // Output: "John "

    strcat(fullName, lastName);
    cout << "After strcat(fullName, lastName): \"" << fullName << "\"\n";
    // Output: "John Smith"

    // Another example
    cout << "\nStarting with: greeting = \"" << greeting << "\"\n";
    strcat(greeting, fullName);
    cout << "After strcat(greeting, fullName): \"" << greeting << "\"\n";
    // Output: "Hello, John Smith"


    // ============================================================
    // strcmp() - Compare strings
    // ============================================================
    cout << "\n--- strcmp() ---\n";

    char word1[20] = "apple";
    char word2[20] = "apply";
    char word3[20] = "apple";
    char word4[20] = "Apple";

    int result1 = strcmp(word1, word2);
    cout << "strcmp(\"" << word1 << "\", \"" << word2 << "\") = " << result1;
    if (result1 < 0)
        cout << " (apple comes before apply)\n";

    int result2 = strcmp(word1, word3);
    cout << "strcmp(\"" << word1 << "\", \"" << word3 << "\") = " << result2;
    if (result2 == 0)
        cout << " (strings are equal)\n";

    int result3 = strcmp(word1, word4);
    cout << "strcmp(\"" << word1 << "\", \"" << word4 << "\") = " << result3;
    if (result3 > 0)
        cout << " (Apple comes before apple - uppercase first!)\n";

    // Practical use in if statement
    cout << "\nPractical example:\n";
    if (strcmp(word1, word3) == 0) {
        cout << "\"" << word1 << "\" and \"" << word3 << "\" are the same!\n";
    }
    return 0;
}