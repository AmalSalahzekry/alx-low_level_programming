#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h: node pointer
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
