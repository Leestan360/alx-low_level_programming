#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: char array type string
 * Description: the number in the string can be preceded by an
 * infinite number of characters
 * You need to take into account all the -/+ signs before the number
 * You are not allowed to use long
 * You are not allowed to declare new variables of 'type' array
 * You are not allowed to hard-code special values
 * Return: value of string
 */

int _atoi(char *s)
{
	int a;
	int b, c;

	b = 0;
	c = -1;
	for (a = o; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			c *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (b < 0)
				b = (b * 10) - (s[a] - '0');
			else
				b = (s[a] - '0') * -1;

			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}
	}
	if (c < 0)
		b *= -1;

	return (b);
}
