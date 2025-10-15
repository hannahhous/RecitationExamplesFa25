#include <iostream>
#include <cstdlib>
using namespace std;

class Clock {
private:
    int hours;
    int minutes;

    void normalize() {
        // Ensure minutes < 60 and hours < 24
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
    }

public:
    Clock(int h = 0, int m = 0) : hours(h), minutes(m) {
        normalize();
    }

    // For printing
    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes;
    }

    friend Clock operator+(const Clock &a, const Clock &b);
    friend Clock operator-(const Clock &a, const Clock &b);
};