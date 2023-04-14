#include "main.h"

/**
 */
void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (memory == 0)
		exit(98);

	return (memory);
}
