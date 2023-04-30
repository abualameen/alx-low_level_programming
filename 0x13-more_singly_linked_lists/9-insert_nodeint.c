#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at an index posi
 * @head: pointer to the head
 * @idx: indx to fix the new node
 * @n: value of the node
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *latest_node;
	unsigned int t;
	listint_t *new_node;
	listint_t *passed_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	if (idx == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
		return (new_node);
	}
	latest_node = *head;
	passed_node = NULL;
	for (t = 0; t < idx && latest_node != NULL; t++)
	{
		passed_node = latest_node;
		latest_node = (*latest_node).next;
	}
	if (t < idx)
	{
		free(new_node);
		return (NULL);
	}
	(*new_node).next = latest_node;
	(*passed_node).next = new_node;
	return (new_node);
}
