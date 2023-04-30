#include "lists.h"
/**
 * free_listint2 - free list memo and sets head to null
 * @head: head of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *latest_node;
	listint_t *node_next;

	latest_node = *head;
	while (latest_node != NULL)
	{
		node_next = (*latest_node).next;
		free(latest_node);
		latest_node = node_next;
	}
	*head = NULL;
}
