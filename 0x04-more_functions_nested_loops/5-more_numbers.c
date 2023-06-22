#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int row;
	int num1, num2;

	for (row = 1 ; row <= 10; row++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			num2 = num1;

			if (num1 > 9)
			{
				_putchar(1 + '0');
				num2 = num1 % 10;
			}
			_putchar(num2 + '0');
		}
		_putchar('\n');
	}
}
