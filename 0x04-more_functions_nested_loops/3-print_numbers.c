#include "main"

/**
 * print_numbers - that print numbers from 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num >= '0'; num < '10'; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
