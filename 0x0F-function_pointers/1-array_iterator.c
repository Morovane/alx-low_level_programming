#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: function to pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int index;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
