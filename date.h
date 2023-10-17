// Date class declaration

#include <string>

class Date {
public:
    Date(int month, int day);
    int month() const;
    int day() const;
    void updateDate(int month, int day);
    std::string toString() const;

private:
    int _month;
    int _day;    
};