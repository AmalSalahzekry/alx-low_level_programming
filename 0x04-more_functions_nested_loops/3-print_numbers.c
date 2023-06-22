#include "main"

/**
 * print_numbers - that print numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num >= '0'; num < '10'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
