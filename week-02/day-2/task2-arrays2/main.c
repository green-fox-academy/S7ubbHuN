#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";

	/* TODO:
    Print out the two arrays character-by-character */
    int i = 0, j = 0;
    for (i = 0; i < sizeof char_array; i++) {
        printf("%c", char_array[i]);
    }
    printf("\n");
    for (j = 0; j < sizeof char_array_the_same; j++) {
        printf("%c", char_array_the_same[j]);
    }
	return 0;
}
