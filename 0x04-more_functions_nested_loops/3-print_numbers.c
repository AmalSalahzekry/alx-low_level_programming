#include "main"

/**
 * print_numbers - that print numbers from 0 to 9
 */

void print_numbers(void)
{
	int num;

	while (num >= '0' && num < '10')
	{
		_putchar( num + '0');
		num++;
	}
	_putchar('\n');
}
