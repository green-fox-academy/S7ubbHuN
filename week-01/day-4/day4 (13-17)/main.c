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
int c, k;


    for ( c = 1 ; c <= 7 ; c++ )
    {
        for( k = 1 ; k <= c ; k++ )
            printf("*");

        printf("\n");
    }
    for ( c = 7 ; c >= 1 ; c-- )
    {
        for( k = 1 ; k <= c ; k++ )
            printf("*");

        printf("\n");
    }


  return 0;
}
