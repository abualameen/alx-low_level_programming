#include "lists.h"
/**
 * insert_dnodeint_at_index - func insert node at give index
 * @h: head of the nodes
 * @idx: idx of the node to be insertd
 * @n: data to be inserted
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int counter = 0;
	dlistint_t *latest;

	if (h == NULL)
		return (NULL);
	latest = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (latest != NULL && counter < idx - 1)
	{
		latest = latest->next;
		counter++;
	}
	if (latest == NULL)
		free(new_node);
		return (NULL);
	new_node->prev = latest;
	new_node->next = latest->next;
	if (latest->next != NULL)
	{
		latest->next->prev = new_node;
	}
	latest->next = new_node;
	return (new_node);
}
