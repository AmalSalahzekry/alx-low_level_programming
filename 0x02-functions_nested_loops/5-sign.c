#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: take the int sign from the function.
 * Return: 1 if +, 0 else if 0, -1 else -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
