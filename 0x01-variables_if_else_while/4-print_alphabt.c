#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha = alpha + 1;
		}

		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);

}
