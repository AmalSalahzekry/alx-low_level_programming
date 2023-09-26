#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: 1st node pointer
 * @n: new node
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (head == NULL || n_node == NULL)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (*head)
		n_node->next = *head;
	*head = n_node;
	return (n_node);
}
