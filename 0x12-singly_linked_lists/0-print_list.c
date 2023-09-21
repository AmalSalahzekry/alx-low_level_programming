#include "lists.h"

/**
 * print_list - fun to print the elements of the list
 * @h: pointre to the first link
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		cont++;
		ptr = ptr->link;
	}
	printf("%d", cont);
	return (cont);
}
