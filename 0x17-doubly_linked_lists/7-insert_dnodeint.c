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
	dlistint_t *latest1;
	unsigned int counterr = 0;

	latest = *h;
	latest1 = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while (latest != NULL)
	{
		counter++;
		latest = latest->next;
		if (counter == idx)
		{
			break;
		}
	}
	new_node->next = latest;
	while (latest1 != NULL)
	{
		counterr++;
		latest1 = latest1->next;
		if (counterr == idx - 1)
		{
			break;
		}
	}
	new_node->prev = latest1;
	latest->prev = new_node;
	latest1->next = new_node;
	return (new_node);
}
