#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, f1, f2, display;

	f1 = 0;
	f2 = 1;
	display = f1 + f2;
	for (i = 1; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%lu, ", display);
			f1 = f2;
			f2 = display;
			display = f1 + f2;
		}
		else
			printf("%lu", display);
	}
	printf("\n");
	return (0);
}
