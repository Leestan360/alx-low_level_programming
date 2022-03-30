#include "main.h"

int actaull_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to return its natural square root
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (actuall_sqrt_recursion(n, 1));
}

/**
 * actuall_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @i: number to calculate the square root of
 * @a: iterator
 * Return: the resulting square root
 */

int actuall_sqrt_recursion(int i, int a)
{
	square = a * a;

	if (square == i)
		return (a);
	else if (square < i)
		return (actuall_sqrt_recursion(i, a + 1));
	else
		return (-1);
}
