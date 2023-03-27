#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: parametre of array
 * @n: number of element
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index < n - 1)
		{
			printf("%d, ", a[index]);
		}
		else
			printf("%d", a[index]);
		index++;
	}
	printf("\n");
}
