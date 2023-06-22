#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int row;
	int num;

	for (row = 1 ; row < 11; row++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(1 + '0');
				num = num % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
