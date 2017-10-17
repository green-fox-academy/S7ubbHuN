#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float f_array[10] = {5.6, 8.73, 0.15, 0.99, 1.5, 6.3589, 10.01, -33.0, 0, 15};
    int i_array[10];

	//TODO: write a program, which copies the values from the given array to an integer array
    //print out the elements of the integer array, with the "%d" format specifier

    memcpy(i_array, f_array, strlen(f_array)+1);

    int i = 0;
    while (i < 10) {
        printf("%d\n", i_array[i]);
        i++;
    }

    //what do you see?
    //dead ppl...

    return 0;
}
