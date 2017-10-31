#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

int sort_ascend(int *numbers, unsigned int arr_length)
{
    int buffer = 0, i = 0, j = 0;
    for (i = 0; i < arr_length; i++) {
        for (j = 0; j < arr_length - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                buffer = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = buffer;
            }
        }
    }
}


int main()
{

    int numbers[10];
    int arr_length = (sizeof numbers / sizeof numbers[0]);
    for (int i = 0; i < arr_length; i++) {
        numbers[i] = i + 1;
        printf("%d, ", numbers[i]);
    }
    sort_ascend(numbers, arr_length);
    printf("\n");
    for (int i = 0; i < arr_length; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}
