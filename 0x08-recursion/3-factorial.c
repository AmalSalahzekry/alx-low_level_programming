#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number
 * Return: -1 on error and 1 on success
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
