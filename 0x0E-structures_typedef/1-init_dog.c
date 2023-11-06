#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type structure dog
 * @d: initializes pointer to structure dog
 * @name: pointer to the name of the dog to initialize
 * @age: age of dog to initialize
 * @owner: pointer to owner of dog to initialize
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
