#include <iostream>
#include <stdexcept>

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main()
{
    /*try {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        if (b == 0){
            throw 10;
        }
        int c = a/b;
        std::cout << c;
    }
    catch(int x) {
        std::cout << "you can not divide by zero! Err no.: " << x;
    }
    return 0;

    // Throw an char in the try block

    try {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        if (b == 0){
            throw 'x';
        }
        int c = a/b;
        std::cout << c;
    }
    catch(char x) {
        std::cout << "you can not divide by zero! Err no.: " << x;
    }
    return 0;*/


    // Throws a bulit-in exception in the try block

    try {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;

        if (b == 0){
            throw std::runtime_error ("you can not divide by zero!");
        }
        int c = a/b;
        std::cout << c;
    }
    catch(std::runtime_error &err) {
        std::cout << err.what();
    }
    return 0;
}
