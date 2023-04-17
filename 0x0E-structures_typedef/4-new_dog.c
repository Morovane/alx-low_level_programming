#include "dog.h"

/**
 * new_dog - that initialized a new dog
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: struct(dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
