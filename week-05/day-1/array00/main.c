#include <stdio.h>
#include <stdlib.h>
/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
*/

//int i;

int main()
{
    srand(time(NULL));
    int intarray[5];
    int i;


    for (i = 0; i < 5; i++) {
        intarray[i] = rand();
        printf("%d | ", intarray[i]);
    }
    printf("\n");
    for (i = 5; i > 0; i--) {

        printf("%d | ", intarray[i - 1]);
    }
    return 0;
}

