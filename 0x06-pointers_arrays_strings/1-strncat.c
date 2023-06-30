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
	char i = '0';
	char c;

	while (dest[i] != '\0')
	{
		i++;
	}
	c = '0';

	while (c < n && src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';

	return (dest);
}
