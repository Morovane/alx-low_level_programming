#include "main.h"
#include <stdlib.h>

/**
 * len_str - that count the lenght of string
 * @str: The String
 * Return: lenght(len).
 */
int len_str(char *str)
{
	int len;

	while (*str)
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
	int len, i;

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
	int word, i = 0, len = 0;

	len = len_str(str);
	i = 0;
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
	int index = 0, word, letters, row, l;
	char **string;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word = count_word(str);
	if (word == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);
	while (row < word)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		if (letters == 0)
			return (NULL);

		string[row] = malloc(sizeof(char) * (letters + 1));
		if (string == NULL)
		{
			for (; row >= 0; row--)
			{
				free(string[row]);
			}
			free(string);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			while (str[index] != ' ')
				string[row][l] = str[index++];
		}
		string[row][letters] = '\0';
		row++;
	}
	string[row] = NULL;
	return (string);
}
