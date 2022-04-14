#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all of its parameters
 * @n: number of arguments
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	sum = 0;
	for (a = 0; a < n; a++)
		sum += va_arg(list, const unsigned int);

	va_end(list);

	return (sum);
}