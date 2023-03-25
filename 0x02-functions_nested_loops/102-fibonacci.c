#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int i, f1, f2, display;

	f1 = 0;
	f2 = 1;
	display = f1 + f2;
	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%ld, ", display);
			f1 = f2;
			f2 = display;
			display = f1 + f2;
		}
		else
			printf("%ld", display);
	}
	printf("\n");
	return (0);
}
