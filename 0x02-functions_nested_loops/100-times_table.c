#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n: parametre
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i, j, mul, d, u;

		for (i = 0; i <= n; i++)
		{
			j = 0;
			while (j <= n)
			{
				mul = i * j;
				if (mul > 9 && mul <= 99)
				{
					u = mul % 10;
					d = mul / 10;

					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(d + 48);
					_putchar(u + '0');
				}
				else if (mul > 99)
				{
					int t, a;

					u = mul % 10;
					t = mul / 10;
					d = t % 10;
					a = t / 10;

					_putchar(44);
					_putchar(32);
					_putchar(a + 48);
					_putchar(d + 48);
					_putchar(u + 48);
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
				j++;
			}
			_putchar('\n');
		}

	}
}
