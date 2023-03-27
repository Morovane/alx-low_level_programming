#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parametre
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, index = 0, n;

	while (str[index++])
		len++;

	n = len / 2;

	for (index = n; index <= len - 1; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
