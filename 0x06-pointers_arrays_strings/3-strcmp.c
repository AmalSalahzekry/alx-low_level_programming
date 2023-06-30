#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1:
 * @s2:
 * Return: 0 for success*/

int _strcmp(char *s1, char *s2)
{
	int com;

	com = 0;
	while (s1[com] != '\0' && s2[com] != '\0')
	{
		if (s1[com] != s2[com])
		{
			return (s1[com] - s2[com]);
		}
		com++
	}
	return (0);
}
