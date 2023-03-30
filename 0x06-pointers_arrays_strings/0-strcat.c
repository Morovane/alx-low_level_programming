#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parametre 1
 * @src: parametre 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[len] != '\0')
	{
		dest[i] = src[len];
		++i;
		++len;
	}


	return (dest);
}
