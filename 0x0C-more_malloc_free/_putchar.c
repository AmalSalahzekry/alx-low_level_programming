#include <unistd.h>

/**
 * _putchar - to write character
 * @c: character to print
 * Return: on success 1, and -1 on error
 * Error is appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
