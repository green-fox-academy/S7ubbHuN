#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>


class House {
  private:
    std::string address;
    unsigned int area;
    unsigned int price;
  public:
    House(std::string address, unsigned int area);
        virtual ~House();
    unsigned int get_price() {
        return this->price;
    }
};

#endif // HOUSE_H
