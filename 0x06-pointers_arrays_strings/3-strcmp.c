#include "main.h"

/**
 * _strcmp - that compares two strings
 * @s1: parametre
 * @s2: parametre
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
