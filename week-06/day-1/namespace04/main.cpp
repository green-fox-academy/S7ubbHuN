#include <iostream>

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

namespace Mark
{
    std::string name = "Mark";
    int age = 36;
    int favnum = 42;
}

namespace Maria
{
    std::string name = "Maria";
    int age = 30;
    int favnum = 22;
}

int sum_age()
{
    return (Mark::age + Maria::age);
}

int main()
{
    std::cout << sum_age();
    return 0;
}
