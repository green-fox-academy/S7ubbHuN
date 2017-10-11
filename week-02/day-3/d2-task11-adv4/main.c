#include <stdio.h>
#include <stdlib.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int arr[50];
    int i;

    for (i = 200; i >= arr[i]; i--)
            printf("%d ", arr[50]);
            printf("\n");
    return 0;
}
