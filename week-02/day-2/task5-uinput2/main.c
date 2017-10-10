#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[255];
    char buffer2[255];   // Buffer variable for user input

    //TODO:
    // Get the user's name with gets
    printf("Enter your name: ");
    gets(buffer);

    //TODO:
    // Print it out with puts
    printf("Your name is: ");
    puts(buffer);

    //TODO:
    // Get the user's pet name with getch
    printf("Enter your pet's name: ");

    int i = 0;
    for (i = 0; i < sizeof buffer2; i++) {
        char c = getch();
        if (c != '\r') {
            buffer2[i] = c;
        }
        else {
            break;
        }
    }
    buffer2[i] = 0;


    //TODO:
    // Print it out

    printf("Your pet's name is: ");
    puts(buffer2);

    return 0;
}
