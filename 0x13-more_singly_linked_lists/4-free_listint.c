#include "lists.h"
/**
 * free_listint - frees memory alocated to listint linked list
 * @head: the head of the link list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *latest_node;
	listint_t *node_next;

	latest_node = head;
	while (latest_node != NULL)
	{
		node_next = (*latest_node).next;
		free(latest_node);
		latest_node = node_next;
	}
}
