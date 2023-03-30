#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: lenght of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i, index;

	index = n - 1;

	if (mn % 2 != 0)
		mn = mn + 1;

	for (i = 0; i <= mn / 2; i++)
	{
		tmp = a[i];
		a[i] = a[index];
		a[index] = tmp;
		--index;
	}

}
