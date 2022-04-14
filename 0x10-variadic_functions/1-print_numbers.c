#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else if (separator && a == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
