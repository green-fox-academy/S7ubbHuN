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

/*
    if (m750i.persons_in_car <= m750i.number_of_seats && Transit.persons_in_car <= Transit.number_of_seats) {
            m750i.add_person_to_car();
            Transit.add_person_to_car();
    } else if (m750i.persons_in_car == m750i.number_of_seats && Transit.persons_in_car <= Transit.number_of_seats){
            Transit.add_person_to_car();
    } else {
            break;
    }
*/
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
        int get_km() {
            return km;
        }
        int get_number_of_seats() {
            return number_of_seats;
        }
        int get_persons_in_car() {
            return persons_in_car;
        }
        std::string get_manufacturer() {
            return manufacturer;
        }
        void set_manufacturer(std::string manufacturer) {
            this->manufacturer = manufacturer;
        }
        void set_number_of_seats(unsigned int number_of_seats) {
            this->number_of_seats = number_of_seats;
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
class Ford: public Car {

};

int main()
{

    Bmw m750i;
    Ford Transit;

    m750i.set_manufacturer("Bmw 750i");
    Transit.set_manufacturer("Ford Transit");
    m750i.set_number_of_seats(5);
    Transit.set_number_of_seats(9);
    std::cout << "1. standard values\nManufacturer: "<< m750i.get_manufacturer() << " Km: " << m750i.get_km() << ", number of seats: " << m750i.get_number_of_seats() << ", persons in car: " << m750i.get_persons_in_car() << std::endl;
    std::cout << "1. standard values\nManufacturer: "<< Transit.get_manufacturer() << " Km: " << Transit.get_km() << ", number of seats: " << Transit.get_number_of_seats() << ", persons in car: " << Transit.get_persons_in_car() << std::endl;

    m750i.add_person_to_car();
    Transit.add_person_to_car();
    std::cout << "2. +1 person\nManufacturer: "<< m750i.get_manufacturer() << " Km: " << m750i.get_km() << ", number of seats: " << m750i.get_number_of_seats() << ", persons in car: " << m750i.get_persons_in_car() << std::endl;
    std::cout << "2. +1 person\nManufacturer: "<< Transit.get_manufacturer() << " Km: " << Transit.get_km() << ", number of seats: " << Transit.get_number_of_seats() << ", persons in car: " << Transit.get_persons_in_car() << std::endl;

    std::cout << "\n\nAdding another 10 person with cycle" << std::endl;

    for (int i = 0; i < 10; ++i) {
        m750i.add_person_to_car();
        Transit.add_person_to_car();
    }

    std::cout << "3. Manufacturer: "<< m750i.get_manufacturer() << " Km: " << m750i.get_km() << ", number of seats: " << m750i.get_number_of_seats() << ", persons in car: " << m750i.get_persons_in_car() << std::endl;
    std::cout << "3. Manufacturer: "<< Transit.get_manufacturer() << " Km: " << Transit.get_km() << ", number of seats: " << Transit.get_number_of_seats() << ", persons in car: " << Transit.get_persons_in_car() << std::endl;

    return 0;
}
