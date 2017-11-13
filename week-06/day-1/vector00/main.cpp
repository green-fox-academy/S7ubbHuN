#include <iostream>
#include <vector>

//create an integer vector with the size of 5 and print the 3rd element of it


int main()
{
    std::vector <int> numbers(5);

    for (int i = 1; i <= 5; ++i) {
        numbers[i] = i;
    }
    std::cout << numbers[3];
    return 0;
}
