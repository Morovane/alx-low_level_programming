#include "main.h"

/**
 * _strlen - that count the lenght of string
 * @s: the string to count
 * Return: lenght
 */
int _strlen(char *s)
{
	int index, len = 0;

	for (index = 0; s[index] != '\0'; index++)
		len++;
	return (index);
}
/**
 * string_nconcat - that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of char in s2 to concatenates
 * Return: pointer(concat)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
	{
		concat = malloc(sizeof(char) * (len1 + n) + 1);

		if (concat == NULL)
			return (NULL);

		for (index = 0; index < (len1 + n); index++)
		{
			if (index < len1)
				concat[index] = s1[index];
			else
				concat[index] = s2[index - len1];
		}
	}
	else
	{
		concat = malloc(sizeof(char) * (len1 + len2) + 1);
		if (concat == NULL)
			return (NULL);
		for (index = 0; index < (len1 + len2); index++)
		{
			if (index < len1)
				concat[index] = s1[index];
			else
				concat[index] = s2[index - len1];
		}
	}
	return (concat);
}
