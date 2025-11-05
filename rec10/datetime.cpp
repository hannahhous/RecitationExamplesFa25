#include <iostream>
using namespace std;
// First base class
class Date {
protected:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2024) 
        : day(d), month(m), year(y) {}
        
    virtual void display() const {
        std::cout << month << "/" << day << "/" << year;
    }
};

// Second base class
class Time {
protected:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0)
        : hour(h), minute(m), second(s) {}
        
    virtual void display() const {
        std::cout << hour << ":" << minute << ":" << second;
    }
};

// Derived class using multiple inheritance
class DateTime : public Date, public Time {
public:
    DateTime(int d = 1, int m = 1, int y = 2024,
            int h = 0, int min = 0, int s = 0)
        : Date(d, m, y), Time(h, min, s) {}
        
    // Override display to show both date and time
    void display() const {
        Date::display();  // Call Date's display
        std::cout << " ";
        Time::display();  // Call Time's display
    }
};

int main() {
    DateTime dt(12, 25, 2024, 14, 30, 0);
    dt.display();  // Shows: 12/25/2024 14:30:00
    cout << endl;
    return 0;
}