#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *b;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(list, char *);
		if (!b)
			b = "(nil)";
		if (!separator)
			printf("%s", b);
		else if (separator && a == 0)
			printf("%s", b);
		else
			printf("%s%s", separator, b);
	}

	printf("\n");

	va_end(list);
}
