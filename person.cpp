#include "person.h"

Person::Person(std::string name, int month, int day) : _name(name), _birthday(month, day) {}

std::string Person::name() const {
    return _name;
}

Date Person::birthday() const {
    return _birthday;
}

