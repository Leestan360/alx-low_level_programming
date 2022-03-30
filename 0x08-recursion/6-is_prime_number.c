#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a
 * prime number, otherwise return 0
 * @n: input integer to test
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (helper(n, 2));
}

/**
 * _sqrt - returns the square root of a number
 * @a: the number
 * @b: number acting as a divisor
 * Return: square root of a
 */

int _sqrt(int a, int b)
{
	int square;

	square = b * b;
	if (square >= a)
		return (b);
	else
		return (_sqrt(a, b + 1));
}

/**
 * helper - recursive steps taken
 * @n: original number of the function is_prime_number
 * @c: incrementor divisor
 * Return: 1 if prime and 0 if not
 */

int helper(int n, int c)
{
	if (n % c == 0)
		return (0);
	else if (_sqrt(n, 1) < c)
		return (1);
	else
		return (helper(n, c + 1));
}
