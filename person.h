#include "date.h"
#include <string>

class Person {
    public: 
        Person(std::string name, int month, int day);
        std::string name() const;
        Date birthday() const;
    private:
        std::string _name;
        Date _birthday;
};