#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings
 * @dest: pointer to dstination
 * @src: pointer to source
 * @n: number of bytes
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		for (c = o; c < n && src[c] != '\0'; c++)
			dest[i++] = src[c];
	return (dest);
}
