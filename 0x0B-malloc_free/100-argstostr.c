#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of
 * your program
 * @ac: int type
 * @av: char pointer to a pointer
 * Return: pointer to a new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *z;
	int a, b, c, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = b = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (c = 0; av[a][b] != '\0'; c++)
			a++;
		a++;
	}

	z = malloc((a + 1) * sizeof(char));

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (b = c = len = 0; len < a; c++, len++)
	{
		if (av[b][c] == '\0')
		{
			z[len] = '\n';
			b++;
			len++;
			c = 0;
		}
		if (len < a - 1)
			z[len] = av[b][c];
	}
	z[len] = '\0';

	return (z);
}
