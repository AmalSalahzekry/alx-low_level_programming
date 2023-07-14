#include "main.h"

/**
 * array_range -  creates an array of integers.
 * @min: min number of array
 * @max: max number of array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
