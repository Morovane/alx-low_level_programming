#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
<<<<<<< HEAD

			if (i == 8 && j == 9)
				continue;
=======
			
			if (i == 8 && j == 9)
				continue;
			
>>>>>>> e11222584f828edf0500a637caabfa95a4ce75dd
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
