#include "main.h"

/**
 * print_rev
 * @s: parametre
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
	{
		len++;
	}
	index = len - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
