#include <stdio.h>

void print_array(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
}

int main()
{
	int a[] = {6, 8, 48, 1, -9, 89};

	//TODO: write a function, which prints out the passed array's elements.


	print_array(a, 6);
	return 0;
}
