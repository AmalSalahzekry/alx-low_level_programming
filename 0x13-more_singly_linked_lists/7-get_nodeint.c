#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: 1st node pointer
 * @index: inex of node
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *ptr = head;

	while (ptr && num < index)
	{
		ptr = ptr->next;
		num++;
	}
	return (ptr ? ptr : NULL);
}
