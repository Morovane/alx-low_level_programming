#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: debut of values
 * @max: end of values
 * Return: pointer(a)
 */
int *array_range(int min, int max)
{
	int *a, range, i;

	if (min > max)
		return (NULL);

	range = max - min;
	a = malloc(sizeof(int *) * range);
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= range; i++)
		a[i] = i;
	return (a);
}
