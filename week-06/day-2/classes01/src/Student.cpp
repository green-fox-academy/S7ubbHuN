#include "Student.h"

Student::Student(std::string name, unsigned int age)
{
    this->name = name;
    this->age = age;
}

Student::~Student()
{
    //dtor
}

void Student::set_name(std::string name) {
    this->name = name;
}

void Student::set_age(unsigned int age) {
    this->age = age;
}

void Student::print_data() {
    std::cout << "hello my name is " << name << " and i am " << age << " yrs old" << std::endl;
}
