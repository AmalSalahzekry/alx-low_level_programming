#include "lists.h"

/**
 * print_list:
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
	_putchar('%d', cont);
	return (cont);
}
