#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed
 * @dest: parametre 1
 * @src: parametre 2
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
