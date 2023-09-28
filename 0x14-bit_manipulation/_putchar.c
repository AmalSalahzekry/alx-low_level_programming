#include "main.h"
#include <unistd.h>

/**
 * _putchar - fun to print character
 * @c: character to print
 * Return: 1 on success & -1 On error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
