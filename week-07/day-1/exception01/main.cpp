#include <iostream>
#include <stdexcept>

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main()
{
    try {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        if (b == 0){
            throw std::runtime_error("you can not divide by zero!");
        }
        int c = a/b;
        std::cout << c;
    }
    catch(std::runtime_error &err){
        std::cout << err.what();
    }
    return 0;
}
