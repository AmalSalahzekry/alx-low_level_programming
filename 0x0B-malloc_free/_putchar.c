#include <unistd.h>

/**
 * putchar - the function that type 1 char
 * @c: character to print
 * Return: 1 on sucess, -1 on Error
 * an error is appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
