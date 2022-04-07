#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number or elements
 * @size: the size of each element
 * Return: pointer to the allocated memory
 * or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int b;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		a[b] = 0;
	}
	return (a);
}
