#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - enter a random number
 * determine if it is negative or positive
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
