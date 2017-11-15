#include <iostream>
#include <vector>
#include <string>

// Create a Car class.
// Create the following private variables : age, kms_runed, manufacturer, number_of_seats
// use proper variable types.
// Implement a method which has one parameter, and increases the kms_runed variable by its parameter value.
// Implement a method which can add a person to a car, if the number of persons in the car reached
// the value of number of seats in the car it should tell you that 'The car is full!' or something like that.
// Inherite at least two car models and try out the methods you have created.

class Car {
    public:
        int increase_km (unsigned int runned) {
            return (km += runned);
        }
        int add_person_to_car () {
            if (persons_in_car >= number_of_seats) {
                car_full();
            } else {
                ++persons_in_car;
            }
        }
        void car_full() {
            std::cout << "The car is full!" << std::endl;
        }

    private:
        unsigned int age = 0;
        unsigned int km = 0;
        std::string manufacturer;
        unsigned int number_of_seats = 0;
        unsigned int persons_in_car = 0;
};
class Bmw: public Car {

};
class Ford_Transit: public Car {

};

int main()
{

    return 0;
}
