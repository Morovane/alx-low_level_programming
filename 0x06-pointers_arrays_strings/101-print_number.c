#include "main.h"

/**
 * print_number - function that print a number
 * @n: the number how to print
 * Return: void
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	num = n / 10;

	if (num > 0)
	{
		print_number(num);
	}
	_putchar((n % 10) + '0');
}
