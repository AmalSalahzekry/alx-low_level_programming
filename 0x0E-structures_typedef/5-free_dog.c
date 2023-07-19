#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  function that frees dogs.
 * @d: pointer to dog
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
