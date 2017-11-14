#include "Car.h"
#include <string>

Car::Car(std::string type, unsigned int km)
{
    this->type = type;
    this->km = km;
}

Car::~Car()
{
    //dtor
}

unsigned int Car::run() {
    unsigned int number = 5;
    return number + km;
}
