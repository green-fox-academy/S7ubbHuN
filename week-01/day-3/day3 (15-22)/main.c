#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
/*
    //15.feladat

    uint8_t u = 123;
	// print 'Hooray!' if the number is bigger than 100
	if (u > 100)
    printf("Hooray!\n");
    else
        printf("Nyista Hooray! :D\n");
	return 0;

	//16.feladat

	uint16_t v = 426;
	// print 'Yeah!' if dividable by 4 but print 'End of program' after regardless
	if (v % 4 == 0)
    printf("Yeah!\n");
    else
        printf("End of program!\n");
	return 0;

    //17.feladat

    float w = 24;
	int out = 0;
	// if w is even increment out by one
	if (fmod(w,2) == 0)
    out=out+1;
    printf("out: %d\n", out);
	return 0;

	//18.feladat

	uint16_t number = 254;
	// if number can't be represented with 8bits
	// print 'longer than 8bits' otherwise print 'ok'
	if (number>0b11111111)
    {
        printf("Longer than 8bits\n");
    }
    else
        printf("OK!");
	return 0;

	//19.feladat

    int a = 654;
	uint64_t b = 654987312;
	// Tell if the reminder of b devided by a is 3
	if (b%a==3)
    {
        printf("The reminder is 3");
    }
    else
        printf("The reminder is not 3");

	return 0;

	//20.feladat

	uint8_t z = 11;
	// if z is between 10 and 20 print 'Sweet!'
	// if less than 10 print 'More!',
	// if more than 20 print 'Less!'
	if (10<z && z<20)
    {
        printf("Sweet!");
    }
    else if (z<10)
    {
        printf("More!");
    }

    else if (z>20)
    {
        printf("Less!");
    }
	return 0;

	//21.feladat

    uint8_t ab = 123;
	uint8_t credits = 100;
	uint8_t is_bonus = 0;	// This means "false"
	// if credits are at least 50,
	// and is_bonus is false decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is false decrement ab by 1
	// if is_bonus is true ab should remain the same
	if (credits >=50 && is_bonus==0)
    {
        ab=ab-2;
    }
	else if (credits<50 && is_bonus==0)
    {
        ab=ab-1;
    }
    else if (is_bonus!=0)
    {
        ab=ab;
    }
    printf("ab=%d",ab);
    return 0;
*/
    //22.feladat

    uint8_t ac = 8;
	uint8_t time = 24;
	uint8_t out;
	// if ac is dividable by 4
	// and time is not more than 200
	// set out to 0b100
	// if time is more than 200
	// set out to 0b010
	// otherwise set out to 0b001
	if (ac%4==0)
    {
        if (time<=200)
        {
            out=0b100;
        }
        else if (time>200)
        {
            out=0b010;
        }
    }
	else
        out=0b001;
    printf("out=%d",out);
    return 0;
}
