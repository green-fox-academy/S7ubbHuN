#include <stdio.h>
#include <stdlib.h>

int main()
{
    char abc, ABC;
    for(abc = 'a'; abc <= 'z'; abc++)
        printf("%c ", abc);
    for(ABC = 'A'; ABC <= 'Z'; ABC++)
        printf("%c ", ABC);
    return 0;
}
