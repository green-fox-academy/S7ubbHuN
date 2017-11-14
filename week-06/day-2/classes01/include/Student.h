#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
    public:
        Student(std::string name, unsigned int age);
        virtual ~Student();
        void set_name(std::string name);
        void set_age(unsigned int age);
        void greet();

    private:
        std::string name;
        unsigned int age;
};

#endif // STUDENT_H
