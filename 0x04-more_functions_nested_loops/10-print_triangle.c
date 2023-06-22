#include "main.h"

/**
 * print_triangle - *Write a function that prints a triangle
 * @size: the size to print
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num1, num2;

		for (num1 = 1; num1 <= size; num1++)
		{
			for (num2 = 1; num2 <= size; num2++)
			{
				if ((num1 + num2) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
