#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of multiplication of two numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int mul = 1;

	if (argc == 3)
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
