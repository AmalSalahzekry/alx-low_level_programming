#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: pointer to dstination
 * @src: pointer to source
 * @n: number of bytes
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;

	while (dest[i])
		i++;
	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[i + c] = src[c];
	dest[i + c] != '\0';

	return (dest);
}
