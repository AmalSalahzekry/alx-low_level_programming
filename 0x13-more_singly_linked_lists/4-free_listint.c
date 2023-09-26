#include "lists.h"

/**
 * free_listint - frees alistint
 * @head: pointer node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *n_node;

	while (head)
	{
		n_node = head;
		head = head->next;
		free(n_node);
	}
}
