#include <stdio.h>
#include <stdlib.h>

int main()
{
/* create a simple program which generates a triangle like this:
1
22
333
4444
55555
666666
7777777
if you change the rows variable the output should be different as well
*/
    int row=0;
    printf("Enter the number of rows: \n");
    scanf ("%d", &row);
    printf("--------------------------\n");
    for (int a=1; a<=row; a++) {
        for (int b=1; b<=a; b++) {
                printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}
