#include "main.h"

/**
 *  _pow_recursion - Function that returns the value
 * of x raised to the power of y
 * @x: Number
 * @y: power
 * Return: return -1 if no byt found or pointer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
