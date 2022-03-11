#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - assigns a random number and determines it's last digit
 * prints a phrase
 * Return: 0
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

	if (z > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, z);
	else if (z == 0)
		printf("Last digit of %i is %i and is 0\n", n, z);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, z);

	return (0);
}
