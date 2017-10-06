#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    //17.feladat

create a program which draws a diamond, like this:
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *

int c, r, a;
printf("Add meg a csillagok max szamat egy sorban: ");
scanf ("%d", &a);

    for ( c = 1 ; c <= a ; c++ )
    {
        for( r = a ; r >= c ; r-- )
            printf(" ");
        for( r = 1 ; r <= c ; r++ )
            printf("* ");

        printf("\n");
    }
    for ( c = a ; c >= 1 ; c-- )
    {
        for( r = a ; r >= c ; r-- )
            printf(" ");
        for( r = 1 ; r <= c ; r++ )
            printf("* ");

        printf("\n");
    }
    return 0;
}
*/
    //16.feladat

int gcd(int a, int b) {
  int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
  printf("%d", a);
}

}
