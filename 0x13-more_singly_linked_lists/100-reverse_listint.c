#include "lists.h"

/**
 * reverse_listint - rev linked list
 * @head: poninter
 * Return: 1st node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node = NULL;
	listint_t *n_node = NULL;

	while (*head)
	{
		n_node = (*head)->next;
		(*head)->next = p_node;
		p_node = *head;
		*head = n_node;
	}
	*head = p_node;

	return (*head);
}
