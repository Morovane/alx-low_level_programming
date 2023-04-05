#include "main.h"

/**
 * _puts_recursion - function that print  a string
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s++)
		_puts_recursion(s);
	else
		_putchar('\n');
}
