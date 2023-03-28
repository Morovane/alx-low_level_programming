#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed
 * @dest: parametre 1
 * @src: parametre 2
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
