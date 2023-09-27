#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *n_node;
	listint_t *num;

	if (head == NULL)
		;
	n_node = *head;
	while (n_node)
	{
		num = n_node;
		n_node = n_node->next;
		free(num);
	}
	*head = NULL;
}
