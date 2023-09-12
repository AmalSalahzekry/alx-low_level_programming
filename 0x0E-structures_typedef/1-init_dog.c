#include "main.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type
 * @d: pointer to addredd
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
