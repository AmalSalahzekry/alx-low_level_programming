#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_number(n, 0));
}

/**
 * square_number - function to find the natural number root
 * @n: the number
 * @i: square root
 * Return: the square root of a number
 */

int square_number(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (square_number(n, i + 1));
}
