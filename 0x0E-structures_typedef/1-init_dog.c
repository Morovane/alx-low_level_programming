#include <stdio.h>
#include "dog.h"

/**
 * init_dog - that initialize a variable of type struct dog
 * @d: pointer to structer
 * @name: element of struct
 * @age: element of struct
 * @owner: element of struct
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
