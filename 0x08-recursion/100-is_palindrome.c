#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if the string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (_helper(s, --length));
}

/**
 * get_length - gets the length of the string
 * @s: the string
 * Return: length of the string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * _helper - recursive check of palindrome
 * @s: string
 * @a: length of string
 * Return: 1 if the string is palindrome and 0 if not
 */

int _helper(char *s, int a)
{
	if (*s == *(s + 1))
	{
		if (a <= 0)
			return (1);
		else
			return (_helper(++s, a - 2));
	}
	else
		return (0);
}
