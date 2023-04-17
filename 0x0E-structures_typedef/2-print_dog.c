#include <stdio.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		else if (d->age == '\0')
			d->age = 0;
		else if (d->owner == NULL)
			d->owner = "(nil)";

		else
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		printf("nothing");
}
