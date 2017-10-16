int x, y;
int count;
int guess = 0;
int rand_max;
int rand_min;
int rand_num;

void number_asking()
{
    printf("please add the minimum number!\n");
    scanf("%d", &rand_min);
    printf("please add the maximum number!\n");
    scanf("%d", &rand_max);
}

int number_randomizing()
{
    srand(time(NULL));
	rand_num = rand() % (rand_max + 1 - rand_min) + rand_min;
	y = rand_max - rand_min;
	x = log10(y) / log10(2);
}

int starting()
{
    if (x < 4) {
        x = 4;
	}
    printf("I have a number between %d and %d. You have %d lives\n", rand_min, rand_max, x - 3);
}
