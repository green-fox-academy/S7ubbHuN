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
            throw 10;
        }
        int c = a/b;
        std::cout << c;
    }
    catch(int x) {
        std::cout << "you can not divide by zero! Err no.: " << x;
    }
    return 0;
}
