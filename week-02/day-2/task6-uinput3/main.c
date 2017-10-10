#include <stdio.h>
#include <stdlib.h>

int main()
{
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too

    printf("Type in one character: ");
    char_to_ascii();

    return 0;
}

/*void char_to_ascii()
{
    char chr = getch();
    printf("\n");
    printf("The %c character in ASCII is %d.", chr, chr);
}*/
int char_to_ascii()
{
    char chr = 0;
    scanf("%c", &chr);
    printf("\n");
    printf("The %c character in ASCII is %d.", chr, chr);
}

