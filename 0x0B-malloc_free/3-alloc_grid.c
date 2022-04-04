#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to as 2 dimensional
 * array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 * Return: a pointer to the 2 dimensional array
 * or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(width * sizeof(**a));
		if (a[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}
	return (a);
}
