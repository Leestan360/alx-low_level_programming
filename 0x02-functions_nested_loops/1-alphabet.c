#include "main.h"

/**
 * print alphabet in lowecase
 */

void print_alphabet(void)

{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
