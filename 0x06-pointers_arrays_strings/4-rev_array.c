#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: number of elements on array
 * Return: not
 */

void reverse_array(int *a, int n)
{
	int i, rev, c;

	for (i = 0; rev = (n - 1); i < rev; i++; rev--)
	{
		c = a[i];
		a[i] = a[rev];
		a[rev] = c;
	}
}
