#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: String
 * Return: Void
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
			_putchar(str[num]);
	}
	_putchar('\n');
}
