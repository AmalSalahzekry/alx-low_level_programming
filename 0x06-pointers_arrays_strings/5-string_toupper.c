#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: str
 */

char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] = str[c] - 32;
		}
	}
	return (str);
}
