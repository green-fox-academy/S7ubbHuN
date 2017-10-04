#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int g1 = 123;
	int g2 = 345;
	// tell if g1 is bigger than g2
	printf("g1= %d \ng2= %d \n", g1, g2);
	if (g1 > g2)
        {
        printf("g1 is bigger than g2");
        }
    else
    printf("g1 is smaller than g2");
	return 0;
/*
	int h1 = 350;
	int h2 = 200;
	// tell if the double of h2 is bigger than h1
	printf("h1= %d, h2= %d, the double of h2 is %d \n", h1, h2, h2*2);
	if (h2*2 > h1)
        {
        printf("the double of h2 is bigger than h1");
        }
        else
    printf("h1 is smaller than the double of h2");
	return 0;

	int i = 53625;
	// tell if it has 11 as a divisor
	int oszt = 11;
	printf("i= %d, divisor= %d \n", i, oszt);
	if (i%oszt==0)
        {
        printf("the %d is a divisor of %d", oszt, i);
        }
        else
    printf("the %d is not a divisor of %d", oszt, i);
	return 0;

	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	printf("j1= %d, j2= %d \n", j1, j2);
	if (j1>j2*j2)
        {
            if (j1<j2*j2*j2)
            {
                printf("j1 is higher than j2 squared and smaller than j2 cubed");
            }
            else
            printf("j1 is higher than j2 squared but not smaller than j2 cubed");
        }
        else
    printf("j1 is not higher than j2 squared");
	return 0;
*/
	int k = 1521;
	// tell if k is dividable by 3 or 5
    int oszt1=3, oszt2=5;
	printf("k= %d, divisor1= %d, divisor2= %d \n", k, oszt1, oszt2);
	if (k%oszt1==0)
        {
            if (k%oszt2==0)
            {
            printf("k is dividable by %d and %d too", oszt1, oszt2);
            }
            else
                printf("k is dividable by %d but not by %d", oszt1, oszt2);
        }
        else if (k%oszt2==0)
        {
           printf("k is dividable by %d but not by %d", oszt2, oszt1);
        }
        else
            printf("k is not dividable either by %d or by %d", oszt1, oszt2);
	return 0;



}
