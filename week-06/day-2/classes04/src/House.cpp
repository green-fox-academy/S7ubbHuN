#include "House.h"

House::House(std::string address, unsigned int area)
{
    this->address = address;
    this->area = area;
}

House::~House()
{
    //dtor
}
