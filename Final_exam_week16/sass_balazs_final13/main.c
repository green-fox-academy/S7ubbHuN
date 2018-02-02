#include <stdio.h>
#include <stdlib.h>

/*Create a function that takes an array of integers and returns with the nearest integer in the array compared to the average of the array.*/

int main() {

    unsigned int first_element, last_element;
    unsigned int i = 0;
    unsigned int sum = 0;
    float average = 0;

    printf("Enter the first element of the array:");
    scanf("%d", &first_element);
    printf("Enter the last element of the array:");
    scanf("%d", &last_element);

    int array[last_element - first_element];
    unsigned j = (last_element - first_element);

    while (i <= j) {
        array[i] = (first_element + i);
        sum += array[i];
        i++;
    }
    average = (float)sum / (float)(j + 1);
    printf("%.2f\n", average);





    return 0;
}
