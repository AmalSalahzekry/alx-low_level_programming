#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: alphabet from function
 * Return: 1 if uppercase, 0 if other.
 */

int _isupper(int c)
{
	if (c < 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
