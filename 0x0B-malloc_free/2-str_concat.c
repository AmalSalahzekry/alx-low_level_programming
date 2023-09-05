#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int size;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = a = 0;

	while (s1[size] != '\0')
		size++;
	while (s2[a] != '\0')
		a++;

	c = malloc(sizeof(char) * (size + a + 1));

	if (c == NULL)
		return (NULL);

	size = a = 0;
	while (s1[size] != '\0')
	{
		c[size] = s1[size];
		size++;
	}
	while (s2[a] != '\0')
	{
		c[size] = s2[a];
		size++, a++;
	}
	c[size] = '\0';
	return (c);
}

