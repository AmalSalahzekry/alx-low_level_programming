#include "main.h"

/**
 *_puts -  prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: Not
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchat(*str + '0');
		str++;
	}
	_putchar('\n');
}
