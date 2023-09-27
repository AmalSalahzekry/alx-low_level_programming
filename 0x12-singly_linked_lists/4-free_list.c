#include "lists.h"

/**
 * free_list - fun to free list
 * @head: 1st node pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
