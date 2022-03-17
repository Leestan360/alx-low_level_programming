#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times the '\' char is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	a = 0;
	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
