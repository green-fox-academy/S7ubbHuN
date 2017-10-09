#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"
//#define numbers 20


// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int sum();

int main()
{
    scanf("%d", &numbers);
    printf("Sum: %d", sum(numbers));
    return 0;
}

/*int sum(int a)
{
    if(a != 0)
        return a + sum(a - 1);
    else
        return a;

}
*/
int sum(numbers)
{
    int j = 0, i = 0;
    for(i = 1; i <= numbers; i++) {
        j += i;
    }
    return j;
}
