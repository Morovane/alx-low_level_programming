#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0, i;

	while (dest[index] != '\0')
		index++;

	while (src[len] != '\0')
	{
		len++;
	}
	if (len - 1 >= n)
	{
		for (i = 0; i < n; i++)
		{
			dest[index] = src[i];
			index++;
		}
	}
	else
	{
		for (i = 0; i <= len - 1; i++)
		{
			dest[index] = src[i];
			index++;
		}
	}

	return (dest);
}
