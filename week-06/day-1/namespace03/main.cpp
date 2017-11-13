#include <iostream>
#include <string>



// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

namespace Person
{
    std::string name = "Balazs Sass";
    int age = 36;
    int favnum = 42;
}

int year_of_birth()
{
    return (2017 - Person::age);
}

int main()
{
    std::cout << year_of_birth() << std::endl;
    return 0;
}
