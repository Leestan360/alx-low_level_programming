#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return its natural square root
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_recursion(n, 0));
}

/**
 * root_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @a: iterator
 * Return: the resulting square root
 */

int root_recursion(int n, int a)
{
	if (a * a < n)
		return (-1);
	if (a * a == n)
		return (a);
	return (root_recursion(n, a + 1));
}
