#include "date.h"

Date::Date(int month, int day) : _month(month), _day(day) {}

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
