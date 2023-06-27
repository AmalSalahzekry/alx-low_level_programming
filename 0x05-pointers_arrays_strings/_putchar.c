#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: Print character
 * Return: 1 on success, -1 on error
 * and error is set appropriatery
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
