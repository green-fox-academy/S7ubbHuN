#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.
const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};

const char* surprise (int number) {
    if (number > 5) {
        throw (number - 5);
    } else if (number < 0) {
        throw "This is a negative number";
    }
    return (sentence[number]);
}

int main() {

    try {
    int number;
    std::cin >> number;
    std::cout << surprise(number);
    }
    catch (int x) {
        std::cout << "Your number is bigger by " << x << ", then the length of the array." << std::endl;
    }
    catch (const char* x) {
        std::cout << x << std::endl;
    }





}

