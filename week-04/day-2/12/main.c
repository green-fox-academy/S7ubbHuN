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
    int array_size = sizeof(a) / sizeof (int);

	print_array(a, array_size);
	return 0;
}
