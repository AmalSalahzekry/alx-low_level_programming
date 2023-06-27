#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: Not
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
