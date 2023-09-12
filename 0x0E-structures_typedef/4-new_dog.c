#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - fun for lenth
 * @str: the string
 * Return: interger
 */

int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
 * _strcopy - string tocopy
 * @dest: the destination
 * @src: the string
 * Return: dest
 */

char *_strcopy(char dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - copy string
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: Struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ptrd;

	if (!name || age < 0 || owner)
	{
		return (NULL);
	}

	ptrd = (dog_t *) malloc(sizeof(dog_t));

	if (ptrd == NULL)
	{
		return (NULL);
	}

	ptrd->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (ptrd->name == NULL)
	{
		free(ptrd);
		return (NULL);
	}
	ptrd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (ptrd->owner == NULL)
	{
		free(ptrd->name);
		free(ptrd);
		return (NULL);
	}

	ptrd->name = _strcopy(ptrd->name, name);
	ptrd->age = age;
	ptrd->owner = _strcopy(ptrd->owner, owner);

	return (ptrd);
}
