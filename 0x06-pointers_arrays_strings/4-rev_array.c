#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: lenght of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i, mn;

	mn = n - 1;

	for (i = 0; i <= mn / 2; i++)
	{
		tmp = a[i];
		a[i] = a[mn];
		a[mn] = tmp;
		mn--;
	}

}
