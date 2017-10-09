#include <stdio.h>
#include <stdlib.h>
#include "names.h"

// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets it's input parameter
// define more names to greet, call the function multiple times

int greet();

int main()
{
    greet();
    greet();
    greet();
    return 0;
}

int greet(names)
{
    printf("Hello %s, have a nice day!\n", a);

}
