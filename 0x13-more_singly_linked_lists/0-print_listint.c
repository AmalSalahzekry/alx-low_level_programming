#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: node pointer
 * Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}
	return (e);
}
