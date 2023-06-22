#include "main.h"

/**
 * Times_table: prints the 9 times table, starting with 0
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,
 */

void times_table(void)
{
	int num1, num2, num3;

	num3 = num1 * num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');
		for (num2 = 1; num2 < 10; num2++)
		{
			_putchar(',');
			_putchar(' ');
			if (num3 < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
