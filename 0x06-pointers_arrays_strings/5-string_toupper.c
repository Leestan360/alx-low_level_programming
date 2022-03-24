#include "main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * @*: char type
 * Return: resulting string
 */

char *string_toupper(char *)
{
	int a;

	for (a = 0; *[a] != '\0'; a++)
	{
		if (*[a] > 96 && *[a] < 123)
		{
			*[a] -= 32;
		}
	}
	return (*);
}
