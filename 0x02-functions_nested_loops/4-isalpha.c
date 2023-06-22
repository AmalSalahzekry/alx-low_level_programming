#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: check if is a letter, lowercase or uppercase
 *
 * Return: 1 if it is true, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 97 && c <= 122))
		return (1);
	else
		return (0);
}
