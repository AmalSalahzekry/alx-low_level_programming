#include "lists.h"

/**
 * list_len - that returns the number of elements in a linked list
 * @h: th pointer to address
 * Return: the number
 */

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
