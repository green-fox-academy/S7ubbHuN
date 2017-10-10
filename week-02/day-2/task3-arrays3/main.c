#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};

	// TODO:
    // Print out the content of the arrays

    int i = 0, j = 0;
    int int_array_length = sizeof int_array / sizeof int_array[0];
    int float_array_length = sizeof float_array / sizeof float_array[0];

    for (i = 0; i < sizeof int_array_length; i++) {
        printf("%d, ", int_array[i]);
    }
    printf("\n");
    for (j = 0; j < sizeof float_array_length; j++) {
        printf("%.3f, ", float_array[j]);
    }
	return 0;
}
