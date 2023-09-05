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
	int n_size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	for (n_size = 0; str[n_size]; n_size++)
		ptr[n_size] = str[n_size];

	return (ptr);
}
