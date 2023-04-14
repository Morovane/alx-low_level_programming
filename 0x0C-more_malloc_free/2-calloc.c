#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array
 * @b: the constant byte
 * @n: the size of array change
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);

}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of case to allocates
 * @size: the size of type
 * Return: Null or pointer(calloc)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;
	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(sizeof(int) * nmemb);

	if (calloc == NULL)
		return (NULL);

	_memset(calloc, 0, sizeof(int) * nmemb);
	return (calloc);
}
