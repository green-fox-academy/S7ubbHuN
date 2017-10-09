#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

int printer();
int main()
{
    printer();
    return 0;
}

int printer(variables)
{
    printf("%d, ", a);
    printf("%d, ", b);
    printf("%d", c);
}
