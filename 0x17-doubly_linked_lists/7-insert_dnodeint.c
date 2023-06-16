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

	latest = *h;
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
		if (counter == idx)
		{
			new_node->next = latest;
			new_node->prev = latest->prev;
			latest->prev->next = new_node;
			latest->prev = new_node;
			return (new_node);
		}
		counter++;
		latest = latest->next;
	}
	free(new_node);
	return (NULL);
}

/**
 * ext - extends
 * Return: 0
 */

int ext(void)
{
	return (0);
}
