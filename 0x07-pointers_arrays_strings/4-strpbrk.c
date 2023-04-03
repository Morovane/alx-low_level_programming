#include "main.h"

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: array1
 * @accept: array2
 * Return: s+index or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index, i;

	for (index = 0; s[index] > '\0'; index++)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (s[index] == accept[i])
				return (s + index);
		}
	}
	return ('\0');
}
