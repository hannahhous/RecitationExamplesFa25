#include "clockfriend.h"
Clock operator+(const Clock &a, const Clock &b) {
    int totalMinutes = (a.hours * 60 + a.minutes) +
                       (b.hours * 60 + b.minutes);
    return Clock(0, totalMinutes);
}

// Subtraction
Clock operator-(const Clock &a, const Clock &b) {
    int totalMinutes = (a.hours * 60 + a.minutes) -
                       (b.hours * 60 + b.minutes);
    return Clock(0, totalMinutes);
}