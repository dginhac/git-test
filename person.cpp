#include "person.h"

Person::Person(std::string name, std::string firstname, int month, int day) : _name(name), _birthday(month, day) {}

std::string Person::name() const {
    return _name;
}

std::string Person::firstname() const {
    return _firstname;
}

Date Person::birthday() const {
    return _birthday;
}

