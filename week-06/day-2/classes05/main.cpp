#include <iostream>
#include <string>
#include "Circle.h"


int main()
{
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
    Circle circle (10.00);

    std::cout << circle.get_circumference() << std::endl;
    std::cout << circle.get_area()<< std::endl;

    return 0;
}
