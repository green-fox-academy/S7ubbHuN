#include <stdio.h>
#include <stdlib.h>

/*
Write a program where the program chooses a number between 1 and 100. The player is then asked to enter a guess.
If the player guesses wrong, then the program gives feedback and ask to enter an other guess until the guess is correct.

Make the range customizable (ask for it before starting the guessing).
You can add lives. (optional)
*/

int main()
{
    int first_element, last_element, guess, lives = 5;
    int array[255];

    printf("Enter the first element:");
    scanf("%d", &first_element);
    printf("Enter the last element:");
    scanf("%d", &last_element);
    int i = 0;
    int j = (last_element - first_element);
    while (i <= j) {
        array[i] = (first_element + i);
        //printf("%d. element is %d. \n",i + 1,array[i]);
        i++;
    }
    srand(time(NULL));
    int number = (rand() % (last_element - first_element)) + first_element;
    //printf("%d", number);

    while (lives > 0) {
    printf("You have %d lives left. Enter your guess:", lives);
    scanf("%d", &guess);
        if (guess == number) {
            printf("\nYou won! My number was: %d", number);
            break;
        } else if (guess > number) {
                printf("\nWrong! Your guess is bigger than my number!\n");
                lives--;
        } else {
                printf("\nWrong! Your guess is smaller than my number!\n");
                lives--;
        }
    }
    return 0;
}
