#include <iostream>
#include <stdexcept>
#include <string>
#include <stdlib.h>
#include <time.h>

// Create a simple program which has a time lock
// The program shoul ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.

int main()
{
    try {
        int input;
        time_t now = time(0);
        std::cout << "Give num input in 10sec!" << std::endl;
        std::cin >> input;
        time_t time_over = time(0);
        double diff;
        diff = difftime(time_over, now);

        if (diff >=10) {
            throw "Failed, it took you too much time";
        }
    }
    catch (const char* x) {
        std::cout << x << std::endl;
    }

    return 0;
}
