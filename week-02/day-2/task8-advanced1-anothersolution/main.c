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
    int ras, i, pos;

    printf("Enter the length of the array (between 1 and 50): ");
    scanf("%d", &ras);
    if (ras > 50 | ras < 1) {
            printf("This is not a valid number");
            exit(0);
    }

    for(i = 1; i <= ras; i++) {
        arr[i] = i;
        printf("%d, ", arr[i]);
    }
    printf("\nEnter a position: ");
    scanf("%d", &pos);

    for(i = 1; i <= ras; i++) {
        if (pos < 1 | pos > ras) {
            printf("This is an invalid position");
            break;
        }
        else if (i < pos) {
                arr[i] = i;
                printf("%d, ", arr[i]);
        }
        else if (i == pos) {
                ras = ras - 1;
                for(i = pos; i <= ras; i++) {
                    arr[i] = i + 1;
                    printf("%d, ", arr[i]);
                }

        }
    }

    return 0;
}
