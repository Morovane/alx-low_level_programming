#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			int h1 = h / 10;
			int h2 = h % 10;
			int m1 = m /10;
			int m2 = m % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(58);
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
			m++;

		}
		h++;
	}
}
