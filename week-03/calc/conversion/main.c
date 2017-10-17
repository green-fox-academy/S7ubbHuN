#include <stdio.h>
#include <stdlib.h>

//needs: dec to other, bin to dec+other, okt to dec+other, hex to dec+other, greet+numbers asking(?)


void dec_to_other(char* str, int new_base)
{
    char buffer[20];
    int number = atoi(str);
    //printf("%s", str);
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

void bin_to_other(char* str, int new_base)
{
    char buffer[20];
    int number = atoi(str);
    int decnum = 0;
    int i = 0, remainder;
    while (number!=0) {
        remainder = number%10;
        number /= 10;
        decnum += remainder*pow(2,i);
        i++;
    }
    if (new_base == 10) {
        printf("%d", decnum);
    } else if (new_base == 8) {
        itoa(decnum, buffer, 8);
        printf("%s", buffer);
    } else if (new_base == 16) {
        itoa(decnum, buffer, 16);
        printf("%s", buffer);
    }
}

void oct_to_other(char* str, int new_base)
{
    //char oct[32]={0};
    char buffer[20];
    int  decnum = 0, i = 0, power_index = 0;
    for(i = (strlen(str)-1);i >= 0; i--) {
        decnum += (str[i]-0x30)*pow((double)8,(double)power_index);
        power_index++;
    }
    if (new_base == 2) {
        itoa(decnum, buffer, 2);
        printf("%s", buffer);
    } else if (new_base == 10) {
        printf("%d", decnum);
    } else if (new_base == 16) {
        itoa(decnum, buffer, 16);
        printf("%s", buffer);
    }
}

void hex_to_other(char* str, int new_base)
{
    char buffer[20];
    int  decnum = 0, i = 0, power_index = 0, digit = 0;
    for(i = (strlen(str)-1);i >= 0; i--) {
        switch(str[i])
        {
            case 'A':
                digit=10; break;
            case 'B':
                digit=11; break;
            case 'C':
                digit=12; break;
            case 'D':
                digit=13; break;
            case 'E':
                digit=14; break;
            case 'F':
                digit=15; break;
            default:
                digit=str[i] - 0x30;
        }
        decnum += digit * pow((double)16,(double)power_index);
        power_index++;
    }
    if (new_base == 2) {
        itoa(decnum, buffer, 2);
        printf("%s", buffer);
    } else if (new_base == 10) {
        printf("%d", decnum);
    } else if (new_base == 8) {
        itoa(decnum, buffer, 8);
        printf("%s", buffer);
    }
}




int main()
{
    char str[20];
    int original_base;
    int new_base;
    int decnum;
    printf("Give me a number to transform it in an other system: ");
    scanf("%s", &str);
    printf("Give me the original base: ");
    scanf("%d", &original_base);
    printf("Give me the number of the new base: ");
    scanf("%d", &new_base);




    return 0;
}
