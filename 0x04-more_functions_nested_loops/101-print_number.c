#include "main.h"

/**
 * print_number - prints an integer
 * @n: parametre
 *
 * Return: void
 */
void print_number(int n)
{
	int d = 1, test = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	while (test)
	{
		if (n / (d * 10) > 0)
			d = d * 10;
		else
			test = 0;
	}


	while (n >= 0)
	{
		if (d == 1)
		{
			_putchar(n % 10 + '0');
			break;
		}
		else
		{
			_putchar((n / d % 10) + '0');
			d = d / 10;
		}
	}
}
