#include "main.h"

/**
 * print_chessboard - that print chess board
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, j;

	for (row = 0; a[row][7] > '\0'; row++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[row][j]);
		}
		_putchar('\n');
	}

}
