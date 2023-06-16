#include "lists.h"
/**
 * delete_dnodeint_at_index - del node at given idx
 * @head: head of node
 * @index: index of node to del
 * Return: 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *latest;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	latest = *head;
	if (index == 0)
	{
		*head = latest->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(latest);
		return (1);
	}
	while (latest != NULL && counter < index)
	{
		latest = latest->next;
		counter++;
	}
	if (latest == NULL)
	{
		return (-1);
	}
	latest->prev->next = latest->next;
	if (latest->next != NULL)
	{
		latest->next->prev = latest->prev;
	}
	free(latest);
	return (1);
}
