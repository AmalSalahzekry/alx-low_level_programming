#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: is input digital checked from the function
 * Return: 1 if digi, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
