#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of case to allocates
 * @size: the size of type
 * Return: Null or pointer(calloc)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloc = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || calloc == NULL)
		return (NULL);
	else
		return (calloc);
}
