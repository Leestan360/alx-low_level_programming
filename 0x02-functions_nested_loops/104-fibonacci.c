#include <stdio.h>

/**
 * main - main block
 * Description - prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int i, a, b, c, d, e, f;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	c = a / 1000000000;
	d = a % 1000000000;
	e = b / 1000000000;
	f = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", e + (f / 1000000000));
		printf("%lu", f % 1000000000);
		e = e + c;
		c = e + c;
		f = f + d;
		d = f - d;
	}

	printf("\n");

	return (0);
}
