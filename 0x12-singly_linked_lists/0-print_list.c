#include "lists.h"

/**
 * print_list - fun to print the elements of the list
 * @h: pointre to the first link
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	const list_t *current = NULL;

	current = h;

	if (current == NULL)
	{
		printf("[0] (nil)\n");
		return (cont);
	}
	while (current != NULL)
	{
		printf("[%lu] %s\n", current->len, current->str);
		cont++;
		current = current->next;
	}
	return (cont);
}
