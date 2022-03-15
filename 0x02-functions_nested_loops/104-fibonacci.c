#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Description - prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int a = 0, b = 1, c = 0, d = 2;
	unsigned long int x, y, z;
	int count;

	printf("%lu, %lu, ", b, d);
	for (count = 2; count < 98; count++)
	{
		if (b + d > LARGEST || c > 0 || a > 0)
		{
			x = (b + d) / LARGEST;
			y = (b + d) % LARGEST;
			z = a + c + x;
			a = c, c = z;
			b = d, b = y;
			printf("%lu%010lu", c, d);
		}
		else
		{
			y = b + d;
			b = d, d = y;
			printf("%lu", d);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
