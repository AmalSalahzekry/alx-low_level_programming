#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
