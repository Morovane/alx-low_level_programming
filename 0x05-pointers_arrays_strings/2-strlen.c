#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parametre
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
	{
		lenght++;
	}
	return (lenght);

}
