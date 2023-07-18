#include "dog.h"

/**
 * init_dog - init_dog
 * @d: the dog pointer
 * @name: the name
 * @age: tha age
 * @owner: who is the owner
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
