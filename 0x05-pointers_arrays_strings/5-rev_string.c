#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int a, j;
	char rev;

	for (a = 0; s[a] != '\0'; a++)
		for (j = 0; j < a; j++)
		{
			a--;
			rev = s[j];
			s[j] = s[a];
			s[a] = rev;
		}
}
