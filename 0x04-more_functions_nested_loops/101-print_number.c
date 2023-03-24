#include "main.h"

/**
 * print_number - prints an integer
 * @n: parametre
 *
 * Return: void
 */
void print_number(int n)
{
	int d;
	int test;
	int num;

	num = n;
	if (num < 0)
	{
		num = num * -1;
		_putchar('-');
	}

	d = 1;
	test = 1;
	while (test)
	{
		if (num / (d * 10) > 0)
			d *= 10;
		else
			test = 0;
	}


	while (num >= 0)
	{
		if (d == 1)
		{
			_putchar(num % 10 + '0');
			break;
		}
		else
		{
			_putchar((num / d % 10) + '0');
			d /= 10;
		}
	}
}
