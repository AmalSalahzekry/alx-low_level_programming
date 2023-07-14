#includ "main.h"

/**
 * *memset - entry point
 * @a: pointer
 * @j: char to copy
 * @n: bytes to use
 * Return: pointer
 */

char *memset(char *a, char j, unsigned int n)
{
	char *s = a;

	while (n--)
		*a++ = j;

	return (s);
}
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements on array
 * @size: the size of elements
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);

	_memset(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
