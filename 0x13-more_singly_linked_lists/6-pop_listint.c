#include "lists"

/**
 * pop_listint - delet node
 * @head: node pointer
 * Return: nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *n_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	if (n_node != NULL)
	*head = n_node;
	return (n);
}
