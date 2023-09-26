#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: 1st node pointer
 * @n: New node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t end_node = malloc(sizeof(listint_t));
	listint_t num;

	if (head == NULL || end_node == NULL)
		return (NULL);

	end_node->next = NULL;
	end_node->n = n;
	if (*head == NULL)
		*head == end_node;
	else
	{
		num = *head;
		while (num->next)
			num = num->next;
		num->next = end_node;
	}
	return (end_node);
}
