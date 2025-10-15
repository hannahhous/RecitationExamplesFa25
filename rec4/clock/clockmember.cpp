#include "clockmember.h"

const Clock Clock::operator+(const Clock& rhs) const {
    int totalMinutes1 = hours * 60 + minutes;
    int totalMinutes2 = rhs.hours * 60 + rhs.minutes;
    return Clock(0, totalMinutes1 + totalMinutes2);
}

const Clock Clock::operator-(const Clock& rhs) const {
    int totalMinutes1 = hours * 60 + minutes;
    int totalMinutes2 = rhs.hours * 60 + rhs.minutes;
    return Clock(0, totalMinutes1 - totalMinutes2);
}
