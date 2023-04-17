#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Poppy
 * @name: first type
 * @age: second type
 * @owner: third type
 *
 * Description: Nothing
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
