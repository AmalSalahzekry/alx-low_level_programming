#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function for length
 * @ptr: Pointer
 * Return: integer
 */

int _strlen(const char *ptr)
{
	int i = 0;

	while (*ptr++)
		i++;
	return (i);
}

/**
 * _strcopy - function copy string form a to s
 * @s: string past
 * @a: string to copy
 * Return: copied char
 */

char *_strcopy(char *s, char *a)
{
	int num;

	for (num = 0; a[num]; num++)
		s[num] = a[num];
	s[num] = '\0';

	return (s);
}

/**
 * new_dog - creat new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: return pointer or null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 ||	!owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->namw);
		free(dog);

		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
