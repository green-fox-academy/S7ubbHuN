#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
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
}
