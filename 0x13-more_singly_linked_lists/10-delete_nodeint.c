#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: 1st node pointer
 * @index: index of deleted node
 * Return: 1 on success and -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *curnt_node = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (num < index -1)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		num++;
	}
	curnt_node = ptr->next;
	ptr->next = curnt_node->next;
	free(curnt_node);
	return (1);
}
