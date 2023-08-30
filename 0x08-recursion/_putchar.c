#include <unistd.h>

/**
 * _putchr - towrite character
 * @c: the character that we will write
 * Return: 1 on sucess on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
