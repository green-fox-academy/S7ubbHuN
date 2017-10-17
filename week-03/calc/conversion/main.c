#include <stdio.h>
#include <stdlib.h>

//dec to other, bin to dec, okt to dec, hex to dec, greet+numbers asking

void dec_to_other()
{
    char buffer[20];
    number = atoi(str);
    if (new_base == 2) {
        itoa(number, buffer, 2);
        printf("%s", buffer);
    } else if (new_base == 8) {
        itoa(number, buffer, 8);
        printf("%s", buffer);
    } else if (new_base == 16) {
        itoa(number, buffer, 16);
        printf("%s", buffer);
    }
}

int bin_to_dec(long number)
{
    int decnum = 0, i = 0, remainder;
    while (number!=0) {
        remainder = number%10;
        number /= 10;
        decnum += remainder*pow(2,i);
        i++;
    }
    return decnum;
}

void oct_to_dec(double number)
{
    char oct[32]={0};
    int  decnum = 0,i = 0, power_index = 0;
    for(i = (strlen(oct)-1);i >= 0; i--) {
        decnum += (oct[i]-0x30)*pow((double)8,(double)power_index);
        power_index++;
    }
    return decnum;
}

void hex_to_dec()
{

}

void start(char str[], int original_base, int new_base)
{
    char str[20];
    int original_base;
    int new_base;
    printf("Give me a number to transform it in an other system: ");
    scanf("%s", str);
    printf("Give me the original base: ");
    scanf("%d", &original_base);
    printf("Give me the number of the new base: ");
    scanf("%d", &new_base);
}


int main()
{

    return 0;
}
