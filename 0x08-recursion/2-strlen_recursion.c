#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
