#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array
 * @b: the constant byte
 * @n: the size of array change
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);

}
