#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: string to copy
 * Return: pointer or null on failer
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int new_size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	{
		break;
	}
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; new_size < size; new_size++)
			ptr[new_size] = str[new_size];
	}
	return (ptr);
}
