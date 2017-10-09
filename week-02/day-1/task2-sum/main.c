#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"


// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int sum();

int main()
{
    printf("Sum: %d", sum(numbers));
    return 0;
}

int sum(int a)
{
    if(a != 0)
        return a + sum(a - 1);
    else
        return a;

}
