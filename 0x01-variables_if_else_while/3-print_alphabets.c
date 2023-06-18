#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphapatical upper and lower case.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
