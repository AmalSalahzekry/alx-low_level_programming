#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the suze of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int squ1, squ2;

	for (squ1 = 1; squ1 < size; squ1++)
	{
		for (squ2 = 1; squ2 < size; squ2++)
			_putchar('#');
	}
	_putchar('\n');
	}
}
