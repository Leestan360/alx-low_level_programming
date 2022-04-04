#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: 0 if success, NULL if size is equal to 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	a = 0;
	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(sizeof(*b) * size);

	if (b == NULL)
		return (NULL);

	while (a < size)
	{
		*(b + a) = c;
		a++;
	}

	return (b);
}
