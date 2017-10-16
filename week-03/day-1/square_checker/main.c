#include <stdio.h>
#include <math.h>

// This program should work correctly with the following input: 20, 400

int main()
{
	float number, result;

	printf("Please enter a number: ");
	fflush(stdin);
	scanf("%f", &number);

	printf("Please enter the square of that number: ");
	fflush(stdin);
	scanf("%f", &result);

    float square = pow(number, 2);

	if (square == result) { //"if" only examine relations, doesnt count
		printf(":)\n");
	} else
		printf(":(\n");

	return 0;
}
