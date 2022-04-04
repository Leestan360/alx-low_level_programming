#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created
 * @grid: pointer to a 2 dimensional grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid __attribute__((unused)), int height)
{
	int **a;
	int x;

	for (x = 0; x < height; x++)
		free(a[x]);
	free(a);
}
