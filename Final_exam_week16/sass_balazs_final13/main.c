#include <stdio.h>
#include <stdlib.h>
#include "math.h"

/*Create a function that takes an array of integers and returns with the nearest integer in the array compared to the average of the array.*/

int main() {

    unsigned int first_element, last_element;
    unsigned int i = 0;
    unsigned int sum = 0;
    float average = 0;
    unsigned int nearest = 0;

    printf("Enter the first element of the array:");
    scanf("%d", &first_element);
    printf("Enter the last element of the array:");
    scanf("%d", &last_element);

    unsigned int arrsize = (last_element - first_element) + 1;
    int array[arrsize];

    while (i < arrsize) {
        array[i] = (first_element + i);
        sum += array[i];
        i++;
    }

    average = (float)sum / (float)arrsize;
    nearest = array[0];

    for (i = 1; i < arrsize; i++) {
        if ( fabs (average - array[i]) < fabs (average - nearest)) {
            nearest = array[i];
        }
    }
    printf("The average of the array is: %.2f\n", average);
    printf("The nearest number to the average is: %d\n", nearest);

    return 0;
}
