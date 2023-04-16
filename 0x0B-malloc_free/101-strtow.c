#include "main.h"
#include <stdlib.h>

/**
 * _strlen - that count the lenght of string
 * @str: The String
 * Return: lenght(len).
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * word_len - function that count the lenght of a word
 * @str: The word
 * Return: lenght of word
 */
int word_len(char *str)
{
	int len = 0, i = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_word - function count the number of word in a string
 * @str: The string
 * Return: count of word
 */
int count_word(char *str)
{
	int word = 0, i = 0, len = 0;

	len = _strlen(str);
	while (i < len)
	{
		if (str[i] != ' ')
		{
			word++;
			i = i + word_len(str + i);
		}
		i++;
	}
	return (word);
}

/**
 * strtow - function that splits a string into words
 * @str: The string to splits
 * Return: Pointer
 */
char **strtow(char *str)
{
	int index = 0, word, letters, row = 0, l;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word = count_word(str);
	if (word == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
		return (NULL);
	while (row < word)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);

		strings[row] = malloc(sizeof(char) * (letters + 1));
		if (strings == NULL)
		{
			for (; row >= 0; row--)
			{
				free(strings[row]);
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[row][l] = str[index++];

		strings[row][l] = '\0';
		row++;
	}
	strings[row] = NULL;
	return (strings);
}
