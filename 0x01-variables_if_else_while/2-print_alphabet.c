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

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		alpha_lower = tolower(alpha);
		putchar(alpha_lower);
	}

	putchar('\n');

	return (0);

}
