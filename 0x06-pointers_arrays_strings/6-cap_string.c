#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string input
 * Return: string (str)
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (index == 0 || str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' || str[index - 1] == ',' ||
				str[index - 1] == ';' || str[index - 1] == '.' ||
				str[index - 1] == '!' || str[index - 1] == '"' ||
				str[index - 1] == '(' || str[index - 1] == ')' ||
				str[index - 1] == '{' || str[index - 1] == '}')
			str[index] -= 32;
		index++;
	}
	return (str);
}
