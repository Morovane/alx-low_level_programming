#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n: parametre
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j, mul;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul > 9 && mul <= 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(mul / 10 + 48);
					_putchar(mul % 10 + '0');
				}
				else if (mul > 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar((mul / 10) / 10 + 48);
					_putchar((mul / 10) % 10 + 48);
					_putchar(mul % 10 + 48);
				}
				else
				{
					if (j != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}
