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
	int alpha_lower;

	alpha = 'A';
	while (alpha <= 'Z')
	{
		alpha_lower = tolower(alpha);
		putchar(alpha_lower);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);

}
