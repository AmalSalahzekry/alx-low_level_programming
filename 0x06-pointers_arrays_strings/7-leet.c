#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @c: string
 * Return: cp value
 */

char *leet(char *c)
{
	char *cp = c;
	char letr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	unsigned int m;

	while (*c)
	{
		for (m = 0; m < sizeof(letr) / sizeof(char); m++)
		{
			if (*c == letr[m])
			{
				*c = num[m];
			}
		}
		c++;
	}
	return (cp);
}
