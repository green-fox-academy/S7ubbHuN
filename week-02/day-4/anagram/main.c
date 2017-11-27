#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[5] = {};
    char temp;
    int i;
    int array_length = 5;
    for (i = 0; i <= array_length;) {
        if (array[i] > array[i+1]) {
           temp = array[i+1];
           array[i+1] = array[i];
           array[i] = temp;

        }

    }

    return 0;
}
