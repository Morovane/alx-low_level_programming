#include "dog.h"

/**
 * free_dog - that frees dogs
 * @d: pointer for struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
