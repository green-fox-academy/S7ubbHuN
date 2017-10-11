#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20];
    int freq[20];

    // TODO: write a program wich asks for a number, that will be the real size of the array (20 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // Finally print all unique elements in array

    int ras, i;

    printf("Enter the length of the array (the max. is 20): ");
    scanf("%d", &ras);
    for(i = 1; i <= ras; i++) {
        if (ras > 20) {
            printf("This is bigger then 20!");
            break;
        }
        else if (ras < 1) {
            printf("This is not a positive value");
            break;
        }
        arr[i] = i;
        printf("%d, ", arr[i]);
    }


    return 0;
}
