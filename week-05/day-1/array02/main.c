#include <stdio.h>
#include <stdlib.h>

/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */

int main()
{
    srand(time(NULL));
    int numarray[12];
    int i;

    for (i = 0; i < 12; i++){
        numarray[i] = rand();
    }

    return 0;
}
