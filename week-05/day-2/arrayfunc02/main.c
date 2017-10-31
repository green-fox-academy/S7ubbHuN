#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */

int char_change (char *arr1, char *arr2, unsigned int index, int arr1_l, int arr2_l)
{
    if (index > arr2_l) {
        return -1;
    } else if ((arr2_l - index) > (arr1_l - index)) {
        return 1;
    } else {
        for (int i = index; i < arr1_l; i++) {
        arr1[i] = arr2[i];
        }
    }
    return 0;
}


int main()
{
    char arr1[10];
    char arr2[10];
    unsigned int index = 0;
    int arr1_l = (sizeof arr1 / sizeof arr1[0]);
    int arr2_l = (sizeof arr2 / sizeof arr2[0]);

    //1. index is out of bounds (return = 0)

    for (char i = 'a'; i < ('a' + arr1_l); i++) {
        arr1[i] = i;
        }
    for (char j = 'A'; j < ('A' + arr2_l); j++) {
        arr2[j] = j;
        }
    index = 5;
    printf("%d\n", char_change(arr1, arr2, index, arr1_l, arr2_l));

    //2. index is out of bounds (return = -1)

    for (char i = 'a'; i < ('a' + arr1_l); i++) {
        arr1[i] = i;
        }
    for (char j = 'A'; j < ('A' + arr2_l); j++) {
        arr2[j] = j;
        }
    index = 15;
    printf("%d\n", char_change(arr1, arr2, index, arr1_l, arr2_l));

    //3. inserted content is longer than the receiving array (return 1)

    arr2_l = 20;
    for (char i = 'a'; i < ('a' + arr1_l); i++) {
        arr1[i] = i;
        }
    for (char j = 'A'; j < ('A' + arr2_l); j++) {
        arr2[j] = j;
        }
    index = 9;
    printf("%d\n", char_change(arr1, arr2, index, arr1_l, arr2_l));

    return 0;
}
