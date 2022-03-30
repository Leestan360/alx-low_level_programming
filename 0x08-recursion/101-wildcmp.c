#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2:second string
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		return (wildcmp(s1, _helper_wildcmp(s2, *(s1 + 1), 0, 0) + s2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		return (wildcmp(s1 + _helper_wildcmp(s1, *(s2 + 1), 0, 0), s2));
	}
	return (0);
}

/**
 * _helper_wildcmp - checks for all the paths when characters are equal
 * @s: string
 * @a: char type
 * @b: integer
 * @c: integer
 * Return: the resulting string
 */

int _helper_wildcmp(char *s, char a, int b, int c)
{
	if (*(s + b) == '\0')
		return (c + 1);
	else if (*(s + b) == a || *(s + b) == '*')
		c = b;

	return (_helper_wildcmp(s, a, b + 1, c));
}
