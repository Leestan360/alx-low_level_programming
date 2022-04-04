#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory
 * @str: string to make a duplicate of
 * Return: NULL if str = NULL and the string on success
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
		;

	c = malloc(a * sizeof(*c) + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < a; b++)
	{
		c[b] = str[b];
	}
	c[a] = '\0';

	return (c);
}
