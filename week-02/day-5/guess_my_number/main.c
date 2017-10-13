#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first_element, last_element;
    int array[255];

    printf("Enter the first element:");
    scanf("%d", &first_element);
    printf("Enter the last element:");
    scanf("%d", &last_element);
    int i = 0;
    int j = (last_element - first_element);
    while (i <= j) {
        array[i] = (first_element + i);
        //printf("%d. element is %d. \n",i + 1,array[i]);
        i++;
    }
    //srand(time(NULL));
    int number = (rand() % (last_element - first_element)) + first_element;
    printf("%d", number);




    return 0;
}
