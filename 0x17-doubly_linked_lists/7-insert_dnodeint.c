#include "lists.h"
int ext(void);
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
	if (new_node == NULL || idx < counter)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
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
	if (idx > counter)
	{
		return (NULL);
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
	if (idx > counter)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		return (new_node);
	}
}

/**
 * ext - extends
 * Return: 0
 */

int ext(void)
{
	return (0);
}
