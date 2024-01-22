#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: point to structure
 * @name: point to dog name
 * @age: dog age
 * @owner: point to dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
