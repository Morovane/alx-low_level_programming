#include "main.h"

/**
 * print_number - function that print a number
 * @n: the number how to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		num = n;
	}

	num = num / 10;

	if (num != 0)
	{
		print_number(num);
	}
	_putchar((unsigned int)n % 10 + '0');
}
