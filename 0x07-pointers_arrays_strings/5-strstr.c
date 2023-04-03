#include "main.h"

/**
 * _strstr - that locates a substring
 * @haystack: array
 * @needle: parametre
 * Return: hastack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index, i = 0;

	if (*needle == 0)
		return (haystack);

	while (haystack[i] > '\0')
	{
		index = 0;

		if (haystack[i] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack + i);
				index++;
			} while (haystack[i + index] == needle[index]);

		}
		i++;
	}
	return ('\0');
}
