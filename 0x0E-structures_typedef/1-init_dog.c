#include "main.h"
#include <stdio.h>

/***/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = &name;

	(*d).name = name;

	d = &age;

	d->age = age;

	d = &owner
	(*d).owner = owner;
}
