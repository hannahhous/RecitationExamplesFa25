#include "clockmember.h"
int main() {
    Clock c1(10, 45);   // 10:45
    Clock c2(2, 30);    // 02:30

    Clock c3 = c1 + c2; // add times
    c3.output();        // 13:15
/*
    ++c1;               // 10:46
    c1.output();

    c1++;               // 10:47
    c1.output();

    Clock c4 = c2 * 3;  // scale by 3
    c4.output();        // 07:30
    */
}
