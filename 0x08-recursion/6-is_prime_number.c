#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: numbr
 * Return: 1 in success
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (the_prime_number(n, n - 1));
}

/**
 * the_prime_number - function to get the prime number
 * @n: 1st number
 * @num2: 2nd number
 * Return: 1 in succress
 */

int the_prime_number(int n, int num2)
{
	if (num2 == 1)
	{
		return (1);
	}
	else if (n % num2 == 0 && num2 > 0)
	{
		return (0);
	}
	return (the_prime_number(n, num2 - 1));
}
