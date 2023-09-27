#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: 1st node pointer
 * @idx: index for new node address
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *n_node;
	listint_t *ptr = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || head == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	for (num = 0; ptr && num < idx; num++)
	{
		if (num == idx - 1)
		{
			n_node->next = ptr->next;
			ptr->next = n_node;
			return (n_node);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}

