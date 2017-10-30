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
    int i, j, buffer;

    for (i = 0; i < 12; i++){
        numarray[i] = rand();
        printf("%d, ", numarray[i]);
    }
    printf("\n\n");
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++) {
            if (numarray[j] > numarray[j + 1]) {
                buffer = numarray[j];
                numarray[j] = numarray[j + 1];
                numarray[j + 1] = buffer;
            }
        }
    }
    for (i = 0; i < 12; i++){
        printf("%d, ", numarray[i]);
    }

    return 0;
}
