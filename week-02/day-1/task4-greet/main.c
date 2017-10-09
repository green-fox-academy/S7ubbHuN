#include <stdio.h>
#include <stdlib.h>
#include "names.h"

// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets it's input parameter
// define more names to greet, call the function multiple times

void greet();

int main()
{
    greet();
    return 0;
}

void greet()
{
    int i = 0;
    for (i = 0; i < 6; i++){
        printf("Hello %s, have a nice day!\n", names[i]);
    }
}
