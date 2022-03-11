#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - takes a random number and prints a phrase
 * Return: 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
		printf("Last digit of %i is %i and is greater that 5\n",
				n, a);
	else if (a == 0)
		printf("Last digit of %i is %i and is 0\n", n, a);
	else if (a < 6 && a != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
				n, a);

	return (0);
}
