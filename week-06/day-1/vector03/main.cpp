#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>


int main()
{
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
    //remove the even numbers, then print the items again

    srand((int)time(0));

	std::vector <int> numbers(20);
	for(unsigned int i = 0; i < numbers.size(); ++i) {
        numbers[i] = (rand() % 10);
    }
    std::cout << "The elements are: ";
    for(unsigned int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << ", ";
    }
    for (auto i = numbers.begin(); i != numbers.end(); ) {
        if (*i % 2 == 0) {
            i = numbers.erase(i);
        } else {
            ++i;
        }
    }
    std::cout << "\n";
    std::cout << "The elements are after removing the even numbers: ";
    for(unsigned int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << ", ";
    }
    return 0;
}
