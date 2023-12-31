#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		a = a * 2 + (*b++ - '0');
	}
	return (a);
}
