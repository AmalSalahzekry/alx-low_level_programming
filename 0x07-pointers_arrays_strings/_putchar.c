#include <unistd.h>

/**
 * _putchat - write the character to stdout
 * @c: the character to print
 * Return: 1 on success or -1 on error
 * and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
