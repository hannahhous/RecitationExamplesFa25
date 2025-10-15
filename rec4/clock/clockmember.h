#include <iostream>
#include <cstdlib>
using namespace std;

class Clock {
private:
    int hours;   // 0–23
    int minutes; // 0–59

    void normalize() {
        // Convert minutes to hours
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
        if (minutes < 0) {
            hours -= (abs(minutes) / 60 + 1);
            minutes = 60 - (abs(minutes) % 60);
        }
        // Wrap hours into 0–23
        hours = (hours % 24 + 24) % 24;
    }

public:
    Clock(int h = 0, int m = 0) : hours(h), minutes(m) {
        normalize();
    }

    void output() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << endl;
    }
    const Clock operator+(const Clock& rhs) const;
    const Clock operator-(const Clock& rhs) const;


};
