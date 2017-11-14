#ifndef CAR_H
#define CAR_H
#include <string>


class Car
{
    public:
        Car(std::string type, unsigned int km);
        virtual ~Car();
        unsigned int run();
    private:
        std::string type;
        unsigned int km;

};

#endif // CAR_H
