#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: array destination
 * @src: array source
 * @n: size to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index ;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
		/*or
		 * *dest = src[index];
		 *dest++;*/
	}
	return (dest);
}
