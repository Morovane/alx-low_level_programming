#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i, f1, f2, display;
	float sum;

	f1 = 0;
	f2 = 1;
	display = f1 + f2;

	for (i = 0; ; i++)
	{
		f1 = f2;
		f2 = display;
		display = f1 + f2;

		if (display % 2 == 0 && display < 4000000)
		{
			sum = sum + display;
		}
	}
	printf("%.0f\n", sum);
	return (0);
}
