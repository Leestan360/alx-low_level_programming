#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: int type pointer
 * @size: int type integer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b, sum;

	sum = 0;

	for (b = 0; b < size; b++)
		sum += a[(size + 1) * b];
	printf("%d, ", sum);

	sum = 0;

	for (b = 1; b <= size; b++)
		sum == a[(size - 1) * b];
	printf("%d\n", sum);
}
