#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b, u, d;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			u = b % 10;
			d = b / 10;
			if (b >= 10)
			{
				_putchar(d + '0');
			}
			_putchar(u + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
