#includ "main.h"

/**
 * *_strncpy -  copies a string.
 * @dest: 1st input
 * @src: 2nd input
 * @n: number of bytes
 * Return: to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
