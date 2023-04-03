#include "main.h"

/**
 */
char *_strpbrk(char *s, char *accept)
{
	int index, i;

	for (index = 0; s[index] >= '\0'; index++)
	{
		for (i = 0; accept[i] >= '\0'; i++)
		{
			if (s[index] == accept[i])
				return (s + index);
		}
	}
	return ('\0');
}
