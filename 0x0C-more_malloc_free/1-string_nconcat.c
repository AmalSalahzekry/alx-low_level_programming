#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of byets
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1,
 * followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;

	if (n < num2)
		a = malloc(sizeof(char) * (num1 + n + 1));
	else
		a = malloc(sizeof(char) * (num1 + num2 + 1));

	if (!a)
		return (NULL);

	while (i < num1)
	{
		a[i] = s1[i];
		i++;
	}
	while (n < num2 && i < (num1 + n))
		a[i++] = s2[j++];

	while (n >= num2 && i < (num1 + num2))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}
