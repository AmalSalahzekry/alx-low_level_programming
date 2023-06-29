#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: pointer to dstination
 * @src: pointer to source
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i++] = src[c];
	}
	dest[i] != '\0';

	return (dest);
}
