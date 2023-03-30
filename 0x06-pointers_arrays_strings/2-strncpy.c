#include "main.h"

/**
 * _strncpy - that copies a string
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (i > len - 1)
		{
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
	}

	return (dest);
}
