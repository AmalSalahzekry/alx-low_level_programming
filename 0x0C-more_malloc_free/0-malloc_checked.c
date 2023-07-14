#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: Number of bytes
 * Return:  a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}