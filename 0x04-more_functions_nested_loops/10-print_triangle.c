#include "main.h"

/**
 *print_triangle - prints a triangle
 * @size: parametre
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = size - i - 1;
			for (j = 0; j < size; j++)
			{
				if (space > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
