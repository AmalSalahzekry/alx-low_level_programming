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

	if(h->str = NULL)
	{
		printf("[0] (nil)\n");
	}
	while (str != NULL)
	{
		cont++;
		str = ptr->link;
	}
	printf("%d", cont);
	return (cont);
}
