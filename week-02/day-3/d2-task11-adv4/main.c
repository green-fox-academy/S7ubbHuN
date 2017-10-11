#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    //write a program which loads up fully a 50-sized integer array starting from 200 in descending order
    //but your array should contain elements which are divisible by 5 and 17
    //print out the array

    int arr[50];
    int i = 1;
    int j = 200;
    while (i <= 50) {
        if (j % 85 == 0) {
            arr[i] = j;
            printf("%d. element is %d. \n",i,arr[i]);
            i++;
        }
    j--;
    }
    return 0;
}
