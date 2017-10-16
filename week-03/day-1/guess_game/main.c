#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "methods.h"


//project-guessing-game
//Note: the program gets harder, when you set a lower range


int main()
{
    number_asking();
    number_randomizing();
    starting();

    for (count = 0; count < x - 3; count++) {
		printf("\n>");
		scanf("%d", &guess);

		while (1) {
			if (guess == rand_num) {
				printf("Yeeeeey, you did well! It took you %d tries!", count + 1);
				break;
			} else if (guess > rand_num) {
                printf("Too big, You have %d, lives left\n", x - 4 - count);
                break;
			} else
				printf("Too low, You have %d, lives left\n", x - 4 - count);
				break;
        }
    }
    return 0;
}
