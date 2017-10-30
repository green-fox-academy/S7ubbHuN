#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
*/



int main()
{
    srand(time(NULL));
    int intarray[5];

    for (int i = 0; i < 5; i++) {
        intarray[i] = rand();
        printf("%d | ", intarray[i]);
    }
    return 0;
}
