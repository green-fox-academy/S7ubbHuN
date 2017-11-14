#include <iostream>
#include "Pirate.h"
#include <string>

int main()
{
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

    Pirate pirate;

    std::cout << pirate.hows_goin_mate() << std::endl;
    std::cout << pirate.drink_rum() << std::endl;
    std::cout << pirate.hows_goin_mate() << std::endl;
    std::cout << pirate.drink_rum() << std::endl;
    std::cout << pirate.drink_rum() << std::endl;
    std::cout << pirate.drink_rum() << std::endl;
    std::cout << pirate.drink_rum() << std::endl;
    std::cout << pirate.hows_goin_mate() << std::endl;


    return 0;
}
