#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: print character
 * Return: 1 is success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
