#include <iostream>
#include <string>

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

namespace Person
{
    std::string name = "Balazs Sass";
    int age = 37;
    int favnum = 42;
}


int main()
{
    std::cout << Person::name << Person::age << Person::favnum << std::endl;
    return 0;
}
