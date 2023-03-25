#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i, f1, f2, display, sum;

	f1 = 0;
	f2 = 1;
	display = f1 + f2;

	while (display < 4000000)
	{
		f1 = f2;
		f2 = display;
		display = f1 + f2;

		if (display % 2 == 0)
		{
			sum = sum + display;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
