#include <stdio.h>
#include <stdlib.h>

int main()
{
    //17.feladat
    /*
create a program which draws a diamond, like this:
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
int c, r;

    for ( c = 1 ; c <= 7 ; c++ )
    {
        for( r = 7 ; r >= c ; r-- )
            printf(" ");
        for( r = 1 ; r <= c ; r++ )
            printf("* ");

        printf("\n");
    }
    for ( c = 7 ; c >= 1 ; c-- )
    {
        for( r = 7 ; r >= c ; r-- )
            printf(" ");
        for( r = 1 ; r <= c ; r++ )
            printf("* ");

        printf("\n");
    }


  return 0;
}
