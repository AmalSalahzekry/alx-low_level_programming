#include "main.h"

/**
 * print_numbers - that print numbers from 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
