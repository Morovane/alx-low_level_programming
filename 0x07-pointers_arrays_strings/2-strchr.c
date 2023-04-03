#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: array
 * @c: carachter to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	return ('\0');

}
