#include "main.h"

/**
 * string_toupper - letters of a string to uppercase
 * @up: string
 * Return: string (up)
 */
char *string_toupper(char *up)
{
	int i = 0;

	while (up[i] != '\0')
	{
		if (*up >= 'a' && *up <= 'z')
		{
			up[i] = up[i] - 32;
		}
		i++;
	}
	return (up);
}
