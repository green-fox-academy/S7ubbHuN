#include <stdio.h>
#include <stdlib.h>

/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

int main()
{
    srand(time(NULL));
    int intarray[5], anotherarray[7];
    int i;
    anotherarray[0, 6] = 42;


    for (i = 0; i < 5; i++) {
        intarray[i] = rand();
        anotherarray[i + 1] = intarray[i];
    }


    return 0;
}
