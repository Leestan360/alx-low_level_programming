#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the function int_index
 * Return: index of first element that matches with
 * `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
