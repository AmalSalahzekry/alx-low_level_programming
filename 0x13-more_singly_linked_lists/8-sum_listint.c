#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data
 * @head: 1st node pointer
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		res += ptr->n;
		ptr = ptr->next;
	}
	return (res);
}
