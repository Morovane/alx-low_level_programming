#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parametre
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0, index1 = 0;
	char str;

	while (s[index++])
	{
		len++;
	}

	index = len - 1;

	while (index >= len / 2)
	{
		str = s[index];
		s[index] = s[index1];
		s[index1] = str;
		index--;
		index1++;
	}

}
