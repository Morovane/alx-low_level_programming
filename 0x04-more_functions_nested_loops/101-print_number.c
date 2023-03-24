#include "main.h"

/**
 * print_number - prints an integer
 * @n: parametre
 *
 * Return: void
 */
void print_number(int n)
{
	int d = n;

	if (d < 0)
	{
		d = d * -1;
		_putchar('-');
	}

	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
