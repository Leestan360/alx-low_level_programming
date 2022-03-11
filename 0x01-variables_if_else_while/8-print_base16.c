#include <stdio.h>

/**
 * main - main block
 * Prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
