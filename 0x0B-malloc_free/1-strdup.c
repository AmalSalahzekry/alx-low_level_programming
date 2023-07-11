#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:  a duplicated of the string
 * Return: NULL if str = NULL
 * On success, the _strdup function
 * returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was availabl
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	a = malloc(sizeof(char) * (size + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}

	return (a);
}
