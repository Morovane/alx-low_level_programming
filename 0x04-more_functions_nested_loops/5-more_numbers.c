#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
			{
				int u = b % 10;
				int d =b / 10;
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
				_putchar(b + '0');

			b++;
		}
		a++;
		_putchar('\n');
	}
}
