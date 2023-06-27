#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: String
 * Return: Void
 */

void puts_half(char *str)
{
	int hstr;

	for (hstr = 0; str[hstr] != '\0'; hstr++)
		;

	hstr++;
	for (hstr /= 2; str[hstr] != '\0'; hstr++)
	{
		_putchar(str[hstr]);
	}
	_putchar('\n');
}
