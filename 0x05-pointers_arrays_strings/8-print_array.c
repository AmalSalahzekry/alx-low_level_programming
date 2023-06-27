#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * followed by a new line
 * @a: For array
 * @n: th numer of elements
 * Return: Void
 */

void print_array(int *a, int n)
{
	int ar;

	for (ar = 0; ar < n; ar++)
	{
		if (ar != (n - 1))
			printf("%d, ", a[ar]);
		else
			printf("%d", a[ar]);
	}
	printf("\n");
}
