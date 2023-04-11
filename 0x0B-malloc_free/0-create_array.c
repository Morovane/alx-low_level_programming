#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: parametre
 * @c: the characters
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
