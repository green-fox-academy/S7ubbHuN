#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unosrted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */

int sort_ascend (int *numbers, unsigned int arr_length_numbers)
{
    int buffer = 0, i = 0, j = 0;
    for (i = 0; i < arr_length_numbers; i++) {
        for (j = 0; j < arr_length_numbers - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                buffer = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = buffer;
            }
        }
    }
}

int look_for (int *sorted_numbers, unsigned int arr_length_sorted_numbers, int index)
{
    int i, counter = 0;
    for (i = 0; i < arr_length_sorted_numbers; i++) {
            if (sorted_numbers[i] == index) {
                counter++;
                return i;
            }
    }
    if (counter == 0){
        return -1;
    }
}



int main()
{
    int numbers[50];
    int sorted_numbers[50];
    int i = 0, j = 0;
    int index;
    int arr_length_numbers = (sizeof numbers / sizeof numbers[0]);
    int arr_length_sorted_numbers = (sizeof sorted_numbers / sizeof sorted_numbers[0]);
    srand(time(NULL));

    for (i = 0; i < arr_length_numbers; i++) {
        numbers[i] = rand();
    }

    index = numbers[rand()%49];
    sort_ascend(numbers, arr_length_numbers);
    for (j = 0, i = 0; j < arr_length_numbers; j++, i++) {
        sorted_numbers[j] = numbers[i];
    }
    int searched_index = look_for (sorted_numbers, arr_length_sorted_numbers, index);
    if (searched_index == -1) {
        printf("The searched number is not in the array");
    } else {
        printf("The searched number: %d, is at the %dth position (%dth pos. index) in the array", index, searched_index + 1, searched_index);
    }

    printf("\n------------------------------------------------------------\n");

    index = 0;
    searched_index = look_for (sorted_numbers, arr_length_sorted_numbers, index);
    if (searched_index == -1) {
        printf("The searched number is not in the array\n");
    } else {
        printf("The searched number: %d, is at the %dth position (%dth pos. index) in the array", index, searched_index + 1, searched_index);
    }



    return 0;
}
