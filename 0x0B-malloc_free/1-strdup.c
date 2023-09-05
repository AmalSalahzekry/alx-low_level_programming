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
	int size = 0;
	int n_size;

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
		for (; n_size < size; n_size++)
			ptr[n_size] = str[n_size];
	}
	return (ptr);
}
