#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int multip = i * j;

			if (multip > 9)
			{
				int u = multip % 10;
				int d = multip / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');

			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(multip + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
