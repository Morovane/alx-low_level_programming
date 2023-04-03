#include "main.h"

/**
 * _strspn - that gets the length of a prefix substring
 * @s: array
 * @accept: array
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int index, i;
	unsigned int len = 0;

	for (index = 0; s[index] > '\0'; index++)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (s[index] == accept[i])
			{
				len += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
	}
	return (len);
}
