#include "Pirate.h"
#include <string>
#include <iostream>


Pirate::Pirate()
{
    this->counter = 0;
}

Pirate::~Pirate()
{
    //dtor
}

const char* Pirate::drink_rum() {
    ++counter;
    return "Drinking";
}

const char* Pirate::hows_goin_mate() {
    if (counter >= 5) {
        return "Arrrr";
    } else {
        return "Nothin'!";
    }
}
