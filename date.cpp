#include "date.h"
#include <assert.h> 

Date::Date(int month, int day) : _month(month), _day(day) {
    bool status = isDate(month, day);
    assert(status && "Date is not valid");
}

int Date::month() const {
    return _month;
}

int Date::day() const {
    return _day;
}

void Date::updateDate(int month, int day) {
    _month = month;
    _day = day;
}

std::string Date::toString() const {
    return std::to_string(_month) + "/" + std::to_string(_day);
}

/**
 * 
 * Helper functions 
 * 
*/

bool isDate(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || 
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}