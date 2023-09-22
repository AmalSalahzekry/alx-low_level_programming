#include "lists.h"

/**
 * print_list - fun to print the elements of the list
 * @h: pointre to the first link
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	const list_t *current;

	current = h;

	if (current == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (current != NULL)
	{
		printf("[%u] %s\n", current->len, current->str);
		cont++;
		current = current->next;
	}
	return (cont);
}
