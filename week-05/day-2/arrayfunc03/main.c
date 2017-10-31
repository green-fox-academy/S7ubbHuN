#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * lenght of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works approrpiately.
 */

int *arraylengths (char *arr1, char *arr2, char *arr3)
{
    int arr1_l = strlen(arr1);
    int arr2_l = strlen(arr2);
    int arr3_l = strlen(arr3);
    int output[3] = {arr1_l, arr2_l, arr3_l};

    return output;



}

int main()
{
    char arr1[] = {"Good"};
    char arr2[] = {"Morning"};
    char arr3[] = {"Cica"};
    int *output_pointer;
    int i;
    output_pointer = arraylengths(arr1, arr2, arr3);

    for (i = 0; i < 3; i++){
        printf("%d, ", *(output_pointer + i));
    }

    return 0;
}
