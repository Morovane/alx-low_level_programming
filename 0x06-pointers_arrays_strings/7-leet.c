#include "main.h"

/**
 * leet - that encodes a string into 1337.
 * @str: string
 * Return: string (str)
 */
char *leet(char *str)
{
	int index = 0, i;
	char s[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index] != '\0')
	{

		for (i = 0; i <= 7; i++)
		{
			if (str[index] == s[i] || str[index] - 32 == s[i])
				str[index] = i + '0';
		}
		index++;
	}
	return (str);
}
