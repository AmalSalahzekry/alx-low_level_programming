#include "main.h"

/**
 * *_strstr -  locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return:pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *p;

	for (*haystack = 0; *haystack != '\0'; haystack++)
	{
		i = haystack;
		p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
