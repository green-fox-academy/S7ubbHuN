#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int soldiers_number, i, pos;

    printf("Enter the number of soldiers (between 1 and 255): ");
    scanf("%d", &soldiers_number);
    if (soldiers_number > 255 | soldiers_number < 1) {
            printf("This is not a valid number");
            exit(0);
    }

    /*for(i = 1; i <= soldiers_number; i++) {
        arr[i] = i;
    }*/
    i = 0;
    pos = i + 1;

    while (i <= soldiers_number) {
        arr[i] = i;
        for(i = 1; i <= soldiers_number; i++) {
            if (i == pos) {
                soldiers_number = soldiers_number - 1;
                for(i = pos; i <= soldiers_number; i++) {
                    arr[i] = i + 1;
                    printf("%d, ", arr[i]);
                }
            }
            i++;
        }
    }
    return arr[1];
}



