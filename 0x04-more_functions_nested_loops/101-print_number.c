#include "main.h"

/**
 * print_number - prints an integer
 * @n: parametre
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		n = n * (-1);
		k = n;
	}

	if ((k / 10) != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) n % 10 + 48);
}
