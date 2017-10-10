#include <stdio.h>
#include <stdlib.h>


int main()
{
    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting
    int arr[50];
    int ras, i, j, pos;

    printf("Enter the length of the array (the max. is 50): ");
    scanf("%d", &ras);
    int real_arr[ras];

    for(i = 1; i <= ras; i++) {
        if (ras > 50) {
            printf("This is bigger then 50!");
            break;
        }
        real_arr[i] = i;
        printf("%d ", real_arr[i]);
    }
    printf("\nEnter a position: ");
    scanf("%d", &pos);

    for(i = 1; i <= ras; i++) {
        if (i == pos) {
            printf(" ");
            i++;
        }
        real_arr[i] = i;
        printf("%d ", real_arr[i]);
    }
    return 0;
}
