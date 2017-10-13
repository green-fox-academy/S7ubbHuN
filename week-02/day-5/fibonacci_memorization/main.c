#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"
#include "process.h"

// create a function which returns a Fibonacci number like in the example code
// this time do it with memoization
// again the parameters value should be stored in a .h file



//int fibonacci(number);

int main()
{
    printf("Which Fibonacci number do you want to get? ");
    scanf("%d", &number);
    printf("The %d. number is : %d", number, fibonacci());
    return 0;
}



