#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 * @n: numer of times charachers that should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;

		for (num = 1; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
