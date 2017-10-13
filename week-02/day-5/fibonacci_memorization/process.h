
int fibonacci()
{
    int i;
    int fibonacci[number+1];
    fibonacci[0] = 0;
    fibonacci[1] = 0;
    fibonacci[2] = 1;
    for (i = 3; i <= number; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    return fibonacci[number];
}


