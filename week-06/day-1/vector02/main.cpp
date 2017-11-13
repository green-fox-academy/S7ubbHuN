#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <numeric>

int main()
{
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

    srand((int)time(0));
	std::vector <int> numbers(10);
	for(unsigned int i = 0; i < numbers.size(); ++i) {
        numbers[i] = (rand() % 10);
    }

	std::cout << "The elements are: ";
    for(unsigned int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << ", ";
    }

    return 0;
}
