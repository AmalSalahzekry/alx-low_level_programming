#include <unistd.h>

/**
 * _putchar - where we could write the char
 * @c: the charachter to print
 * Return: 1 on success, if error return -1
 * and error is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

