#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *  @dest: string that will pasted
 *  @src: string that will copied
 *  Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int cstr = -1;

	{
		do {
			cstr++;
			dest[cstr] = src[cstr];
		} while (src[cstr] != '\0');
	}

	return (dest);
}
