#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts the number of words in a string
 * @s: the string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings on Success
 * or NULL on failure
 */

char **strtow(char *str)
{
	char **mat, *z;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				z = (char *) malloc(sizeof(char) * (c + 1));
				if (z == NULL)
					return (NULL);
				while (start < end)
					*z++ = str[start++];
				*z = '\0';
				mat[b] = z - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	mat[b] = NULL;

	return (mat);
}
