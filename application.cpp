#include <iostream>
#include "date.h"

int main()
{
    Date today(10,13);
    std::cout << "Today is " << today.toString() << std::endl;
    
    Date tomorrow = today;
    tomorrow.updateDate(today.month(), today.day() + 1);
    std::cout << "Tomorrow will be " << tomorrow.month() << "/" << tomorrow.day() << std::endl;

    Date yesterday = today;
    yesterday.updateDate(today.month(), today.day() - 1);
    std::cout << "Yesterday was " << yesterday.month() << "/" << yesterday.day() << std::endl;

    return 0;
}

