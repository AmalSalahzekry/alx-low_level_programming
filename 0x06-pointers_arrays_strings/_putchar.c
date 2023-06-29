#include <unistd.h>

/**
 * _putchar - to write a character on it
 * @c: the character we will print
 * Return: 1 on success, and -1 on error
 * the error is not appropiaty
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
