#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

// create a function which returns a Fibonacci number like in the example code
// this time do it with memoization
// again the parameters value should be stored in a .h file



//int fibonacci(number);

int main()
{
    printf("%d", fibonacci(number));
    return 0;
}

int fibonacci(int number)
{
    if (number == 1) {
        return 1;
    } else if (number == 2) {
        return 1;
    } else
        return fibonacci(number - 1) + fibonacci(number - 2);
}
