#include "lists.h"
/**
 * get_dnodeint_at_index - func gets node at given index
 * @head: head of the node
 * @index: indx of the nth node of a dlinklist
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *latest;
	unsigned int counter = 0;

	latest = head;
	while (latest->next != NULL)
	{
		latest = latest->next;
		counter++;
		if (counter == index)
		{
			break;
		}
	}
	return (latest);
}
