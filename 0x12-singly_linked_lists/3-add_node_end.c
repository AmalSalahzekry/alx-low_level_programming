#include "lists.h"

/**
 * add_node_end - add node on the end
 * @head: Pointer
 * @str: another pointr
 * Return: the last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodend = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (head == NULL || new_nodend == NULL)
		return (NULL);
	if (str)
	{
		new_nodend->str = strdup(str);
		if (new_nodend->str == NULL)
		{
			free(new_nodend);
			return (NULL);
		}
		new_nodend->len = _strlen(new_nodend->str);

	}
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_nodend;
	}
	else
	{
		*head = new_nodend;
	}
	return (new_nodend);
}
