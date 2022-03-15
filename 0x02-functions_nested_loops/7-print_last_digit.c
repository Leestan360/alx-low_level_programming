#include "main.h"

/**
 * print_last_digit - return the last digit
 * @a: number to check
 * Return: 0 or 1
 */

int print_last_digit(int a)
{
	int b;

	a = a >= 0 ? a : a * -1;
	b = a % 10;
	_putchar('0' + b);

	return (b);
}
