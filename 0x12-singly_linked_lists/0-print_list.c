#include "lists.h"

/**
 * print_list - fun to print the elements of the list
 * @h: pointre to the first link
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	const list_t *str = NULL;

	str = h;

	if(str = NULL)
	{
		printf("[0] (nil)\n");
	}
	while (str != NULL)
	{
		printf("[%u] %s\n" h->len, h->str);
		cont++;
		str = str->link;
	}
	printf("%d", cont);
	return (cont);
}
