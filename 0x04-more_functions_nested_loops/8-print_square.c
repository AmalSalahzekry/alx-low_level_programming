#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int sq1, sq2;

		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < size; sq2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
