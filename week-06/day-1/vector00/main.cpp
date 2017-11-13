#include <iostream>
#include <vector>
#include <numeric>

//create an integer vector with the size of 5 and print the 3rd element of it


int main()
{
    std::vector <int> numbers(5);
    iota( numbers.begin(), numbers.end(), 1 );
    int i = 2;
    std::cout << "The "<< i + 1 << "th element is " << numbers.at(i) << "!" << std::endl;

    //create an integer vector with the size of 5 and print all elements of it

    std::cout << "The elements are: ";
    for(unsigned int i = 0; i< numbers.size(); ++i) {
        std::cout << numbers[i] << ", ";
    }

    return 0;
}
