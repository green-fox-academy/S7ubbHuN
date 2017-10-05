#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
/*
    //1.feladat

    int age;
    float height;
    printf("Add meg a korod: ");
    scanf ("%d",&age);
    printf ("\nAdd meg a magassagod, meterben (ponttal): ");
    scanf ("%f", &height);
    printf ("\n%d eves es %.2f meter magas vagy.", age, height);
    return 0;

    //2.feladat
    //switch-el netto baromság, de legalább nehéz :D

    int a;
    printf("Adj meg egy nem nulla, egesz szamot: ");
    scanf ("%d", &a);
    if (a>0)
        {
        a=1;
        }
    else if (a<0)
        {
        a=2;
        }

    switch(a)
    {
        case 1 :
            printf ("A szam pozitiv!");
            break;
        case 2 :
            printf ("A szam negativ!");
            break;
        default : printf ("Hiba! A szam nulla!");
    }
    return 0;

    //3.feladat

    int8_t ad,a;
    printf("Adj meg egy nullatol kulonbozo egesz szamot: ");
    scanf ("%d", &ad);
	// print the numbers till ad from 0
	if (ad>0)
        {
        printf("A szamok sorrendje 0-tol %d-ig\n", ad);
        for(a = 0; a <= ad; a++)
            {
            printf("%d, ", a);
            }
        }
    else if (ad<0)
        {
        printf("A szamok sorrendje %d-tol 0-ig\n", ad);
        for(a = ad; a <= 0; a++)
            {
            printf("%d, ", a);
            }
        }
    else
        {
            printf ("HIBA! A szam nem lehet nulla!");
        }

    return 0;

    //4.feladat

    int8_t ae,a;
    printf("Adj meg egy pozitiv egesz szamot: ");
    scanf ("%d", &ae);
	// print "yeeeeeeeey" ae times
	if (ae>0)
        {
        for(a = 0; a < ae; a++)
            {
            printf("yeeeeeeeey, ", a);
            }
        }
    else
        {
            printf("HIBA! Pozitiv egesz szamot adj meg!");
        }
        return 0;

    //5.feladat

    int8_t a,b;
    printf("Adj meg egy pozitiv egesz szamot: ");
    scanf ("%d", &a);
	// print the even numbers till 20
	printf("0-tol, %d-ig a paros szamok a kovetkezoek: ", a);
    for(b = 0; b <= a; b++)
            {
                if (b%2==0)
                printf("%d, ",b);
            }

        return 0;
*/
    //6.feladat
    // Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".
    uint8_t eleje, vege;
        printf("Adj meg egy 255nel kisebb, pozitiv egesz szamot: ");
        scanf ("%d", &eleje);
        printf("Most adj meg egy az elozonel nagyobb, de 255nel kisebb, pozitiv egesz szamot: ");
        scanf ("%d", &vege);

    for(int i = eleje; i <= vege; i++)
            {
                if (i%3==0 && i%5==0)
                    {
                    printf("FizzBuzz, ");
                    }
                else if (i%3==0)
                    {
                    printf("Fizz, ");
                    }
                else if (i%5==0)
                    {
                    printf("Buzz, ");
                    }
                else
                {
                    printf("%d, ", i);
                }
            }

	return 0;
}
