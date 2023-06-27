#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int j = 0;
	char rev = s[0]

		while (s[a] != '\0')
			a++;
	while (j < a)
		j++;
	{
		a--;
		rev = s[j];
		s[j] = s[a];
		s[a] = rev;
	}
}
