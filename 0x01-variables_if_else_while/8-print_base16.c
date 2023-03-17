#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 16)
	{
		putchar('0x' + number);
		number++;
	}
	putchar('\n');

	return (0);
}
