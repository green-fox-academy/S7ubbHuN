#ifndef PIRATE_H
#define PIRATE_H
#include <string>
#include <iostream>


class Pirate
{
    public:
        Pirate();
        virtual ~Pirate();
        const char* drink_rum();
        const char* hows_goin_mate();

    private:
        unsigned int counter;
};

#endif // PIRATE_H
