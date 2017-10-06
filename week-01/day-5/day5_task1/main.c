#include <stdio.h>
#include <stdlib.h>

int main()
{
    char abc, ABC;
    for(abc = 'a'; abc <= 'z'; abc++)
        {
            ABC=abc-32;
            printf("%c%c ", abc,ABC);
        }

    return 0;

}
