#include "main.h"

/**
 * *argstostr -  concatenates all the arguments of your program.
 * @ac: int
 * @av: char
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int m = 0;
	int cmpt = 0;
	char *a;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			cmpt++;
	}
	cmpt += ac;

	a = malloc(sizeof(char) * cmpt + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[m] = av[i][j];
			m++;
		}
		if (a[m] == '\0')
		{
			a[m++] = '\n';
		}
	}
	return (a);
}
