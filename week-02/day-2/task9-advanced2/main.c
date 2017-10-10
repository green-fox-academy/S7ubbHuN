#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{


	//TODO:
	// Write a C program to find the two largest element in an array using only 1 for loop
	// From <limits.h> use INT_MIN: this is the least integer
	int number_array[100];
	int highest1, highest2, i, val;

	highest1 = INT_MIN;
	highest2 = INT_MIN;
	for (i = 1; i < 100; i++) {
        printf("Enter numbers, 0 to finish:\n");
        scanf("%d", &val);
            if (val == 0) {
                number_array[i] = '\0';
                break;
            }
        number_array[i] = val;
    }

	for (i = 1; number_array[i] != 0; i++) {
        if (number_array[i] > highest1) {
            highest2 = highest1;
            highest1 = number_array[i];
        } else if (number_array[i] < highest1 && number_array[i] > highest2) {
            highest2 = number_array[i];
            }
 	}
    printf("The highest element is %d and the second highest is %d.", highest1, highest2);
	return 0;
}
