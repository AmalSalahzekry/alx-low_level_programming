#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of square
 */

void print_square(int size)
{
	int sq1, sq2;

	for (sq1 = 1; sq1 < size; sq1++)
	{
		for (sq2 = 1; sq2 < size; sq2++)
			_putchar('#');
		_putchar('\n');
	}
}
