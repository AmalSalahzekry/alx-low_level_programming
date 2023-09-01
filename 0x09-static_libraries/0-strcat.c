#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: Pointer of destination
 * @src: pointer of source
 * Return: pointer to string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i++] = src[c];
	}
	return (dest);
}
