#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a non-digit in a string
 * @s: string to evaluate
 * Return: 0 if non-digit is found
 * of 1 ontherwise
 */

int _isdigit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (a);
}

/**
 * _strlen - returns the length of the string
 * @s: string to evaluate
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors in main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int a;
	int mul = 1;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
		errors();
	else
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
