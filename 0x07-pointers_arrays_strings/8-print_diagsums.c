#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square
 * @a: array
 * @size: the size of columun
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		a = a + size;	
	}
	
	for (i = 0; i < size; i++)
	{
		a = a - size;
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum, sum2);
}
