#include <iostream>
#include <vector>
#include <numeric>

//create an integer vector with the size of 5 and print the 3rd element of it


int main()
{
    std::vector <int> numbers(5);
    iota( numbers.begin(), numbers.end(), 1 );
    std::cout << numbers.at(2);
    return 0;
}
