#include "date.h"
#include <string>

class Person {
    public: 
        Person(std::string name, std::string firstname, int month, int day);
        std::string name() const;
        std::string firstname() const;
        Date birthday() const;
    private:
        std::string _name;
        std::string _firstname;
        Date _birthday;
};