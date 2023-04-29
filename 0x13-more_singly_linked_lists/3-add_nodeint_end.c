#include "lists.h"
/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the head pointer
 * @n: int
 * Return: addrss
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new;
	listint_t *latest;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}
	(*node_new).next = NULL;
	(*node_new).n = n;
	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		latest = *head;
		while ((*latest).next != NULL)
		{
			latest = (*latest).next;
		}
		(*latest).next = node_new;
	}
	return (node_new);
}
