#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a
 * prime number, otherwise return 0
 * @n: input integer to test
 */

int is_prime_number(int n)
{
	int a;

	if (a == 1)
		return (1);
	else if (n % a == 0)
		return (0);
	else
		return (is_prime_number(n, a - 1));
}
