#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: take result from the function
 *
 * Return: lasti
 */

int print_last_digit(int n)
{
	int lasti;

	if (n < 0)
		lasti = (-1 * (n % 10));
	else
		lasti = (n % 10);
	_putchar(lasti + '0');
	return (lasti);
}
