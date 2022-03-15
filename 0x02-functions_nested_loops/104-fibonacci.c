#include <stdio.h>

/**
 * main - main block
 * Description - prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, c = 0;

	while (i < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i < 97)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
