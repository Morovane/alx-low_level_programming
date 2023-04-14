#include "main.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: number of byte
 * Return: pointer (memory)
 */
void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (memory == 0)
		exit(98);

	return (memory);
}
