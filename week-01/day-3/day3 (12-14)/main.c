#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
/*
    //12.feladat

    uint8_t a = 60;
    uint8_t b = 0b00111100;
    uint8_t c = 0x3C;
    uint8_t d = 0x3c;

    printf("------------------\n", d);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("------------------\n", d);

    // Try with %x
    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    printf("%x\n", d);
    printf("------------------\n", d);

    // Multiply a by 2
    printf("a erteke decimalisan: %d\n", a*2);
    printf("a erteke hexadecimalisan: %x\n", a*2);
    printf("------------------\n", d);

    // Shift left b by 1
    printf("b, binaris kiiratas:             ");
    printf("%c", (b & 0b10000000 ? '1' : '0'));
    printf("%c", (b & 0b01000000 ? '1' : '0'));
    printf("%c", (b & 0b00100000 ? '1' : '0'));
    printf("%c", (b & 0b00010000 ? '1' : '0'));
    printf("%c", (b & 0b10001000 ? '1' : '0'));
    printf("%c", (b & 0b10000100 ? '1' : '0'));
    printf("%c", (b & 0b10000010 ? '1' : '0'));
    printf("%c\n", (b & 0b10000001 ? '1' : '0'));
    b = b << 1;
    printf("b, shift left, binaris kiiratas: ");
    printf("%c", (b & 1<<7 ? '1' : '0'));
    printf("%c", (b & 1<<6 ? '1' : '0'));
    printf("%c", (b & 1<<5 ? '1' : '0'));
    printf("%c", (b & 1<<4 ? '1' : '0'));
    printf("%c", (b & 1<<3 ? '1' : '0'));
    printf("%c", (b & 1<<2 ? '1' : '0'));
    printf("%c", (b & 1<<1 ? '1' : '0'));
    printf("%c\n", (b & 1<<0 ? '1' : '0'));
    printf("------------------\n", d);

    // Check their values
    printf("%d\n", a);
    printf("b erteke decimalisan, shift left utan: %d\n", b);
    printf("------------------\n", d);

    return 0;

    //13.feladat

    uint8_t x = 0b11001100;
    uint8_t y = 0b01010101;
	uint8_t z;

	// Be z equal to the bitwise and of x and y

	z=(x&y);
	// Check the result with printf
	printf("x=11001100 , y=01010101\n");
	printf("z=(x&y)--> ");
	printf("%c", (z & 1<<7 ? '1' : '0'));
    printf("%c", (z & 1<<6 ? '1' : '0'));
    printf("%c", (z & 1<<5 ? '1' : '0'));
    printf("%c", (z & 1<<4 ? '1' : '0'));
    printf("%c", (z & 1<<3 ? '1' : '0'));
    printf("%c", (z & 1<<2 ? '1' : '0'));
    printf("%c", (z & 1<<1 ? '1' : '0'));
    printf("%c\n", (z & 1<<0 ? '1' : '0'));
    printf("------------------\n");

	// Be z equal to the bitwise or of x and y
	z=(x|y);
	// Check the result with printf
	printf("z=(x|y)--> ");
	printf("%c", (z & 1<<7 ? '1' : '0'));
    printf("%c", (z & 1<<6 ? '1' : '0'));
    printf("%c", (z & 1<<5 ? '1' : '0'));
    printf("%c", (z & 1<<4 ? '1' : '0'));
    printf("%c", (z & 1<<3 ? '1' : '0'));
    printf("%c", (z & 1<<2 ? '1' : '0'));
    printf("%c", (z & 1<<1 ? '1' : '0'));
    printf("%c", (z & 1<<0 ? '1' : '0'));

	return 0;

	//14.feladat
*/
    uint8_t number = 254;
	uint8_t result;

	result = number + 23;
	printf("number: %d\n", number);
	// Check the result with printf
	printf("eredmeny_8 (number+23): %d\n", result);

 	// What happened?!
	// Try again with different datatype
	uint16_t result_16 = number + 23;
	// Check the result with printf
	printf("eredmeny_16 (number+23): %d\n", result_16);

	// What happened and why?

	//----------------------------------------
	int8_t number_negative = number;
	// Check the result with printf

	// What happened and why?
    return 0;



}
