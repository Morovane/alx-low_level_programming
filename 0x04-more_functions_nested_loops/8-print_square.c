#include "main.h"

/**
 * print_square - prints a square
 * @size: parametre of function
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
