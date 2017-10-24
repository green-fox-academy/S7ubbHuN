#include <stdio.h>

void reverse_name(char *name, char *reversed_name);

int main(void)
{
	char name[] = "Gipsz Jakab";

    char reversed[50];

    //write a function which reverse a name's last name and first name. Use a void function. Put your 'return' value in the second parameter.

    reverse_name(name, reversed);
    printf("%s", reversed);
}

void reverse_name(char *name, char *reversed_name)
{
    int i = 0;
    int center = 0;
    int j = 0;

    while (name[i] != ' '){
        i++;
        center = i;
    }

    for (i = center + 1; name[i] != '\0'; i++){
        reversed_name[j++] = name[i];
    }
    reversed_name[j++] = ' ';

    for (i = 0; i != center; i++){
        reversed_name[j++] = name[i];
    }
    reversed_name[j++] = '\0';
}
