#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: charcter to print
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (ptr == NULL || (size == 0))
	{
		return (NULL);
	}
	else
	{
		for (;size > 0; size--)
		{
			ptr[size - 1] = c;
		}
	}
	return (ptr);
}
