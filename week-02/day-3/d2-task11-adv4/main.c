#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int arr[50];
    int i = 0, j;
    while (i < 50) {
        for (j = 200; j >= INT_MIN; j--) {
            if (j % 85 == 0) {
                arr[i] = j;
                printf("%d, ", arr[i]);
                i++;
                break;
            }
        }
    }
    return 0;
}
