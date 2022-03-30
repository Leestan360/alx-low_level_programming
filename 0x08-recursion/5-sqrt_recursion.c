#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return its natural square root
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - recurses to find the natural
 * square root of a number
 * @i: number to calculate the square root of
 * @a: iterator
 * Return: the resulting square root
 */

int halp(int i, int a)
{
	int square;

	square = a * a;

	if (square == i)
		return (a);
	else if (square < i)
		return (halp(i, a + 1));
	else
		return (-1);
}
