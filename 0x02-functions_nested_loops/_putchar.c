#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1
 * On error. -1 is returned, and error is set appropiatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
