#include <lists.h>

/**
 * add_node - to add note on the start
 * @head: the pointer to first node
 * @str: pointere to string
 * Return: first data
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newh;
	unsigned int len = 0;

	while (str[len])
		len++;

	newh = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	newh->str = strdup(str);
	newh->len = len;
	newh->next = (*head);
	(*head) = newh;

	return (*head);
}
