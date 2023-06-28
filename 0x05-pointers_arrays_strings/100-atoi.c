#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string
 * Return: String
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == 45)
			sign *= -1;
		else if (*s >= 48 && *s <= '9')
			num = (num * 10) + (*s - 48);
		else if (num > '0')
			break;
	} while (*s++);

	return (num * sign);
}
