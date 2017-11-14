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

unsigned int House::get_price() {
    price = (area * 400);
    return this->price;
}
