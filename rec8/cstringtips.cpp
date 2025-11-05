#include <iostream>
using namespace std;

int main()
    {


    // CRITICAL: Show the size issue
    cout << "\n=== SIZE MATTERS - NULL TERMINATOR ===\n";
    //char wrong[5] = "Hello";  // WRONG! Need 6 spaces
    char correct[6] = "Hello";   // Correct! 5 letters + '\0'
    cout << "\"Hello\" needs 6 bytes, not 5!\n";

    // ============ 2. COPYING (your section, enhanced) ============
    cout << "\n=== COPYING C-STRINGS ===\n";

    char source[20] = "Original";
    char dest1[20];
    char dest2[20];
    char dest3[20] = "";  // Initialize to empty

    // RIGHT WAY #1: strcpy
    strcpy(dest1, source);
    cout << "After strcpy: " << dest1 << "\n";

    // RIGHT WAY #2: strncpy (SAFER but needs care!)
    strncpy(dest2, source, 19);  // Leave room for '\0'
    dest2[19] = '\0';  // CRITICAL: Ensure null termination!
    cout << "After strncpy: " << dest2 << "\n";

    // Show what happens without null termination
    char dest_bad[20];
    for(int i = 0; i < 20; i++) dest_bad[i] = 'X';  // Fill with 'X'
    strncpy(dest_bad, "Hi", 2);  // Only copies 'H' and 'i', NO '\0'
    dest_bad[2] = '\0';                   // !
    cout << dest_bad;  // Would print "HiXXXXXXX..." - dangerous!

    // ============ 4. USER INPUT ============
    cout << "\n=== USER INPUT WITH C-STRINGS ===\n";

    char title[36];   // For assignment: max 35 chars + '\0'
    char artist[21];  // For assignment: max 20 chars + '\0'

    cout << "Enter a song title: ";
    cin.getline(title, 36);  // Safe - won't overflow

    cout << "Enter artist name: ";
    cin.getline(artist, 21);

    cout << "You entered:\n";
    cout << "  Title: \"" << title << "\" (length: " << strlen(title) << ")\n";
    cout << "  Artist: \"" << artist << "\" (length: " << strlen(artist) << ")\n";


return 0;}


cout << songs[i];