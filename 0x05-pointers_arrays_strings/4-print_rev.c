#include "main.h"

/**
 * print_rev - that prints a string,in reverse, followed by a new line
 * @s: prapeter to print
 * Return: void
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
